import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

# Set the cut value here
cut_value = 5

g1 = ROOT.TGraph() # will hold the max points
hist = ROOT.TH1D("hist", "Cut at: " + str(cut_value), 100, -100, 100)
hist.GetXaxis().SetTitle("distance")

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
            distance = assoc_z - start_z
            hist.Fill(distance)
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

hist.Fill(distance)
hist.Fit("gaus")
hist.Print("all")
fit = hist.GetFunction("gaus")

print " Gaus_Mean: " + str(fit.GetParameter(1))
print " Gaus_STD: "  + str(fit.GetParameter(2))
print ""
print "Under_ctr: " + str(under_ctr)
print "Ctr:       "
print "Efficiency: " + str(100. * under_ctr / ctr)
print "Press <ENTER> to see histogram"
sys.stdin.readline()
hist.Draw("COLZ")
c.Update()
print "Press <ENTER> to exit"
sys.stdin.readline()
