import sys
import math
import ROOT

# Set the output file
gout = open("out_time.txt", "w")

c1 = ROOT.TCanvas("c", "", 600, 500)
g1 = ROOT.TGraph()

# Set preliminary values to avoid getting messed up in the future
endpoint = 0

## METHODS ##

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
#            print "at flash number  " + str(start_ctr)
#            print "max npe changed to  " + str(ch.flash_npe)
#            print "max time changed to " + str(max_time)
        start_ctr += 1
    return max_time

# Given a starting ctr number, returns the ctr
# of the first point in the next event
def getEndpoint(start_ctr):
    if ctr < endpoint:
        return endpoint
    last_event_id = None
    while start_ctr < ch.GetEntries():
        ch.GetEntry(start_ctr)
        event_id = (ch.run, ch.subrun, ch.event)
#        print "event_id: " + str(event_id) + " " + str(start_ctr)
        if last_event_id and not event_id == last_event_id:
#            print "about to break"
            break
        last_event_id = event_id
        start_ctr += 1
    return start_ctr

# Given a set of flashes, determines whether they will
# make a given energy cut
def makesCut(start_ctr, end_ctr, cut):
    maxnpe = 0.
    while start_ctr < end_ctr:
        ch.GetEntry(start_ctr)
        if ch.flash_npe > maxnpe:
            maxnpe = ch.flash_npe
#            print "New max npe: " + str(maxnpe)
        start_ctr += 1
    if maxnpe > cut:
        return True
    else:
        return False

# Given a point with y, z, and time coordinates, plus start and end flashes,
# this returns the "closest" point in Euclidean 3-Space to the given one
def closestPoint(y, z, time, start_ctr, end_ctr):
    distance = None
    finy = 0.
    finz = 0.
    fint = 0.
    while start_ctr < end_ctr:
        ch.GetEntry(start_ctr)
        distance = math.sqrt((y - ch.flash_y)**2 + (z - ch.flash_z)**2 + 3 * 10**8 * (time - ch.flash_t)**2)
        if distance < mindist or not distance:
            mindist = distance
    return (tuple) (finy, finz, fint)

## MAIN SCRIPT ##

# Loop over values of X
x_values = [(x+1)*5 for x in xrange(1)] # makes [5,10,15,20,25,30,35,40,45,50, ..., 100]

for i in x_values:
    
    # Set the X cut value #
    cut_value = i    
    
    # Set the edep cut value #
    edep_cut = 100

    #c = ROOT.TCanvas("c","", 600,500)
    ch = ROOT.TChain("flash_tree")
    ch.AddFile("niki_tree.root")

    hist = ROOT.TH1D("hist", "Cut Value: " + str(cut_value), 200, -1700, 3300)
    hist.GetXaxis().SetTitle("difference in t wrt max npe flash in event")
    
    ctr = 0
    max_npe = 0.
    distance = 1000.
    tot_entries = ch.GetEntries()
    last_event_id = None
    total_distance = 0.
    under_ctr = 0
    start_z = 0.
    u_dist = 0
    total_npe = 0.
    last_start_z = 0.
    evt_ctr = 0
    
    while 1:
        print ctr
        
        ch.GetEntry(ctr)
        event_id = (ch.run, ch.subrun, ch.event)

        # Find which flash has the max npe value for this event,
        # and store its time in maxtime
        endpoint = getEndpoint(ctr)
#        print "The endpoint is: " + str(endpoint)
        
        maxtime = getMaxNpeTime(ctr, endpoint)
#        print "Just found maxtime for number " + str(ctr)

        # Fill histogram and reset analysis variables @ event boundary
        if makesCut(ctr, endpoint, i):
            while ctr < endpoint:
                ch.GetEntry(ctr)
#                print "For flash " + str(ctr) + ", time is: " + str(ch.flash_t)
                hist.Fill(ch.flash_t - maxtime)
                gout.write(str(ch.flash_t - maxtime) + " ")
#                print "Filled Histogram at t = " + str(ch.flash_t - maxtime) + ", press <ENTER>"
                ctr += 1
        else:
            under_ctr += 1
#            print "This one didn't make the cut; press <ENTER>"
            
        ctr = endpoint
        if not ctr < ch.GetEntries():
            break

print "Under: " + str(under_ctr)
hist.Draw()
c1.Update()
print "Press <ENTER> to exit"
sys.stdin.readline()
