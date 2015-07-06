import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

g1 = ROOT.TGraph() # will hold the max points
hist = ROOT.TH1D("hist", "tot_edep_per_event", 200, -.5, 82000)
hist.GetXaxis().SetTitle("edep")

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

# Start of main program
ctr = 0
evt_ctr = 0
sum_npe = 0.
tot_entries = ch.GetEntries()
endpoint = 0
while 1:
    print ctr
    endpoint = getEndpoint(ctr)

    while ctr < endpoint:
        ch.GetEntry(ctr)
        sum_npe += ch.mc_edep
        ctr += 1
    hist.Fill(sum_npe)
    sum_npe = 0.
    ctr = endpoint
    if ctr == tot_entries:
        hist.Draw()
        c.Update()
        break
print "Press <ENTER> to exit"
sys.stdin.readline()
        
