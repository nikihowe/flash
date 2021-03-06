import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

g1 = ROOT.TGraph() # will hold the max points
hist = ROOT.TH1D("hist", "Unweighted gaus fit with cut value 5", 100, -150, 150)
hist.GetXaxis().SetTitle("mc_start_z - max-npe flash_z")

# Set the cut value here
cut_value = 5

ctr = 0
sum_npe = 0.
sum_edep = 0.
max_npe = 0.
distance = 1000.
tot_entries = ch.GetEntries()
last_event_id = None
total_distance = 0.
under_ctr = 0
assoc_z = 0.
start_z = 0.

while ctr < ch.GetEntries():

    if ctr%10000==0:
        print "done",ctr,"..."
        
    ch.GetEntry(ctr)
    event_id = (ch.run, ch.subrun, ch.event)

    # Fill histogram and reset analysis variables @ event boundary
    if last_event_id and not event_id == last_event_id:
        if max_npe > cut_value:
            distance = abs(assoc_z - start_z)
            hist.Fill(start_z - assoc_z)
        else:
            under_ctr += 1
        sum_npe   = 0.
        sum_edep  = 0.
        total_distance += distance
        distance  = 1000.
        max_npe   = 0.
        assoc_z   = 0.
        start_z   = 0.

    # Update the max npe per event    
    if ch.flash_npe > max_npe:
        max_npe   = ch.flash_npe
        assoc_z   = ch.flash_z
        start_z   = ch.mc_start_z
    ctr += 1
    last_event_id = tuple(event_id)

hist.Fill(start_z - assoc_z)
print "Under_ctr: " + str(under_ctr)
print "Ctr:       "
hist.Fit("gaus")
fit = hist.GetFunction("gaus")
ROOT.gStyle.SetOptFit(1)
hist.Draw("COLZ")
c.Update()
c.SaveAs("unweighted_gaus.png")
