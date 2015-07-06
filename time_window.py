import sys
import math
import ROOT
import numpy

# METHODS #

# Given a value, find its associated key
def findKey(value):
    for name, age in points_dict.iteritems():
        if age == value:
            return age

# Given a starting ctr number, returns the ctr
# of the first point in the next event
def getEndpoint(start_ctr):
    last_event_id = None
    while start_ctr < ch.GetEntries():
        ch.GetEntry(start_ctr)
        event_id = (ch.run, ch.subrun, ch.event)
        if last_event_id and not event_id == last_event_id:
            break
        last_event_id = event_id
        start_ctr += 1
    return start_ctr

# Method to find the flash with max npe in any given set of flashes
# returns the time of the flash with max npe
def getMaxNpeTime(start_ctr, end_ctr):
    maxval = 0.
    max_time = 0.
    while start_ctr < end_ctr:
        ch.GetEntry(start_ctr)
        if ch.flash_npe > maxval:
            maxval = ch.flash_npe
            max_time = ch.flash_t
        start_ctr += 1
    return max_time

# Given a set of flashes, determines whether they will
# make a given energy cut
def makesCut(start_ctr, end_ctr, cut):
    maxnpe = 0.
    while start_ctr < end_ctr:
        ch.GetEntry(start_ctr)
        if ch.flash_npe > maxnpe:
            maxnpe = ch.flash_npe
        start_ctr += 1
    if maxnpe > cut:
        return True
    else:
        return False

# Given a starting point and ending point, order flashes in time.
# Returns an ordered list of the times
def orderInTime(start_ctr, end_ctr):
    ordered_times = []
    points_dict = {}
    while start_ctr < end_ctr:
        ch.GetEntry(start_ctr)
        points_dict[ch.flash_t] = (ch.flash_z, ch.flash_npe)
        start_ctr += 1
    for key in sorted(points_dict.iterkeys()):
        ordered_times.append(key)
    return ordered_times,points_dict

# SET UP GLOBALS

window_values = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]

# Output file
gout = open("time_window_output.txt", "w")


for window_size in window_values:

    ch = ROOT.TChain("flash_tree")
    ch.AddFile("niki_tree.root")
        
    # Set the cut value here
    cut_value = 5

    # Set preliminary values to avoid ogetting messed up in the future
    endpoint = 0
    points_dict = {}
    
    ctr = 0
    above_ctr = 0

    print "Window size: " + str(window_size)
    hist = ROOT.TH1D("hist", "Cut at: " + str(cut_value), 100, -120, 120)
    hist.GetXaxis().SetTitle("distance")

    while 1:

        # Find the endpoint of this event
        endpoint = getEndpoint(ctr)

        # Find which flash has the max npe value for this event,
        # and store its time in maxtime
        maxtime = getMaxNpeTime(ctr, endpoint)

        # Order flashes in time within the event (time_list is a list of the ctrs
        # of the various flashes, ordered in time)
        ordered_times,points_dict = orderInTime(ctr, endpoint)

        # Fill histogram and reset analysis variables @ event boundary
        if makesCut(ctr, endpoint, cut_value):
            endtime = None
            maxz = 0.
            max_npe = 0.
            ch.GetEntry(ctr)
            for i in xrange(len(ordered_times)):
                if endtime and ordered_times[i] > endtime:
                    endtime = None
                    hist.Fill(ch.mc_start_z - maxz)
                    gout.write(str(ch.mc_start_z - maxz) + " ")
                if points_dict[ordered_times[i]][1] > cut_value:
                    above_ctr += 1
                    if points_dict[ordered_times[i]][1] > max_npe:
                        maxz = points_dict[ordered_times[i]][0]
                    if not endtime:
                        endtime = ordered_times[i] + window_size
            if endtime: # catch the scenario in which the window goes over the end of the set
                hist.Fill(ch.mc_start_z - maxz)
                gout.write(str(ch.mc_start_z - maxz) + " ")
            endtime = None
        # Reset vars for new event
        ctr = endpoint
        print ctr
        if not ctr < ch.GetEntries():
            break
    gout.write("\n")
