import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

# Uhh, looks like we need a global here?
endpoint = 0

# Given a starting ctr number, returns the ctr
# of the first point in the next event
def getEndpoint(start_ctr):
    if ctr < endpoint:
        return endpoint
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
evt_ctr = 0

# Original Program
while 1:

    point_ctr = 0
    g1 = ROOT.TGraph() # will hold the max points
    max_energy = 0

    endpoint = getEndpoint(ctr)
    while ctr < endpoint:

        ch.GetEntry(ctr)
        g1.SetPoint(point_ctr, ch.flash_t, ch.flash_npe)
        point_ctr += 1
        g1.SetMarkerStyle(20)
        g1.SetMarkerSize(1)
        g1.SetMinimum(0)
        g1.SetTitle("npe values of flashes in event: " + str(evt_ctr))
        g1.GetXaxis().SetTitle("flash_t")
        g1.GetYaxis().SetTitle("flash_npe")
        g1.SetMarkerColor(ROOT.kBlue)
        ctr += 1
    g1.Draw("AP")
    c.Update()
    print "Hit <ENTER> to see next graph"
    sys.stdin.readline()
        
    # Then reset everything
    evt_ctr += 1
    ctr = endpoint

    if ctr == ch.GetEntries():
        break
print "Hit <ENTER> to exit"
sys.stdin.readline()
