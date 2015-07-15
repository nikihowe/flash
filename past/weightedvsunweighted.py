import sys
import math
import ROOT

# Shows what a gaus fit looks like on the data with cut value 5
# Uses npe-weighted position

#---------#
# METHODS #
#---------#

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
def getMaxNpePos(start_ctr, end_ctr):
    maxval = 0.
    max_time = 0.
    while start_ctr < end_ctr:
        ch.GetEntry(start_ctr)
        if ch.flash_npe > maxval:
            maxval = ch.flash_npe
            max_time = ch.flash_z
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


c1 = ROOT.TCanvas("c", "", 600, 500)
g1 = ROOT.TGraph()

# Set the cut value #
cut_value = 5    

ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

hist = ROOT.TH1D("hist", "mc_start_z - flash_z for npe-weighted and max-npe techniques", 100, -500., 500.)
hist.GetXaxis().SetTitle("mc_start_z - flash_z (npe-weighted red vs max-npe blue)")

ctr = 0
max_npe = 0.
u_dist = 0
total_npe = 0.
last_start_z = 0.
while ctr < ch.GetEntries():

    endpoint = getEndpoint(ctr)

    if makesCut(ctr, endpoint, cut_value):
        while ctr < endpoint:
            ch.GetEntry(ctr)
            last_start_z = ch.mc_start_z
            if ch.flash_npe > cut_value:
                u_dist += ch.flash_z * ch.flash_npe
                total_npe += ch.flash_npe
            ctr += 1
        distance = u_dist / total_npe
        hist.Fill(last_start_z - distance)
    u_dist = 0.
    total_npe = 0.    
    ctr = endpoint
    print ctr
hist.SetLineWidth(2)
hist.SetLineColor(ROOT.kRed)
hist.SetFillStyle(3002)
hist.SetFillColor(ROOT.kRed)
hist.Draw()
c1.Update()

# Start of the second part
gist = ROOT.TH1D("gist", "", 100, -500, 500)

ctr = 0
max_npe = 0.

while ctr < ch.GetEntries():
    endpoint = getEndpoint(ctr)
    if makesCut(ctr, endpoint, cut_value):
        zpos = getMaxNpePos(ctr, endpoint)
        gist.Fill(ch.mc_start_z - zpos)
    ctr = endpoint
    print ctr

gist.SetLineWidth(2)
gist.SetLineColor(ROOT.kBlue)
gist.SetFillStyle(3002)
gist.SetFillColor(ROOT.kBlue)
gist.Draw("sames")
print hist.GetEntries()
print gist.GetEntries()
c1.Update()
c1.SaveAs("weighted_vs_unweighted.png")
