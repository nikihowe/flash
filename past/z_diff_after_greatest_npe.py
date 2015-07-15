import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600, 500)
d = ROOT.TCanvas("d", "", 600, 500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

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

# Given a starting point and ending point, order flahes in npe.
# Returns a list of the npes sorted in reverse order
def orderInNpe(start_ctr, end_ctr):
    ordered_npes = []
    points_dict = {}
    while start_ctr < end_ctr:
        ch.GetEntry(start_ctr)
        points_dict[ch.flash_npe] = (ch.flash_z, ch.flash_t)
        start_ctr += 1
    for key in sorted(points_dict.iterkeys()):
        ordered_npes.append(key)
        ordered_npes_yes = list(reversed(ordered_npes))
    return ordered_npes_yes, points_dict
    
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

ctr = 0

for window_size in {1}:

    # Set the cut value here
    cut_value = 5

    # Set preliminary values to avoid getting messed up in the future
    endpoint = 0
    points_dict = {}

    hist = ROOT.TH1D("hist", "Cut at: " + str(cut_value), 100, -300, 300)
    hist.GetXaxis().SetTitle("distance")
    kist = ROOT.TH1D('hist', "Npe value", 100, 0, 500)
    kist.GetXaxis().SetTitle("npe")
    ctr = 0
    above_ctr = 0
    while 1:

        # Find the endpoint of this event
        endpoint = getEndpoint(ctr)

        # Order flashes in time within the event (time_list is a list of the ctrs
        # of the various flashes, ordered in time)
        ordered_npes, points_dict = orderInNpe(ctr, endpoint)

        # Fill histogram and reset analysis variables @ event boundary
        if makesCut(ctr, endpoint, cut_value):
            endtime = None
            max_npe = 0.
            veto_zone = []
            ch.GetEntry(ctr)
#            print "Ordered Npes: " + str(ordered_npes)
            vetoed = True
            for i in ordered_npes:
                    if not i > cut_value:
                        continue
                    if vetoed:
                        vetoed = False
                    elif not vetoed:
                        hist.Fill(ch.mc_start_z - points_dict[i][0])
                        kist.Fill(i)
                        print "Filled for npe = " + str(i) + " at time " + str(points_dict[i][1])
                        
        # Reset vars for new event
        ctr = endpoint
#        print ctr
        if not ctr < ch.GetEntries():
            break
hist.Draw()
c.Update()
c.SaveAs("z_diff_after_greatest_npe.png")
d.cd()
d.SetLogx(1)
kist.Draw()
d.Update()
d.SaveAs("z_diff_after_greatest_npe_npe_value.png")
print "Hit <ENTER> to exit"
sys.stdin.readline()
