import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

g1 = ROOT.TGraph() # will hold the max points
hist = ROOT.TH2D("hist", "edep_vs_npe", 100, -.5, 2700, 100, -.5, 96000)
hist.GetXaxis().SetTitle("npe")
hist.GetYaxis().SetTitle("edep")

ctr = 0
sum_npe = 0.
sum_edep = 0.
tot_entries = ch.GetEntries()
last_event_id = None
while ctr < ch.GetEntries():

    if ctr%1000==0:
        print "done",ctr,"..."
    ch.GetEntry(ctr)
    event_id = (ch.run, ch.subrun, ch.event)

    # Fill histogram and reset analysis variables @ event boundary
    # Event boundary is 
    if last_event_id and not event_id == last_event_id:
        hist.Fill(sum_npe, sum_edep)
        sum_npe   = 0.
        sum_edep  = 0.

    sum_npe += ch.flash_npe
    sum_edep += ch.mc_edep

    ctr+=1
    last_event_id = tuple(event_id)

hist.Fill(sum_npe,sum_edep)   
print hist.GetEntries()
print "Press <ENTER> to see histogram"
sys.stdin.readline()
hist.Draw("COLZ")
c.Update()
sys.stdin.readline()
