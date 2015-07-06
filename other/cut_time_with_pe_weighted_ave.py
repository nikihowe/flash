import sys
import math
import ROOT

# Set the cut value #
cut_value = 5
# Set the cut value #

c = ROOT.TCanvas("c","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

g1 = ROOT.TGraph() # will hold the max points
hist = ROOT.TH1D("hist", "Difference in z between npe-weighted flash_z and mc_start_z cut Value: " + str(cut_value), 100, -150, 150)
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
u_dist = 0
total_npe = 0.

while ctr < ch.GetEntries():

    if ctr%10000==0:
        print "done",ctr,"..."
        
    ch.GetEntry(ctr)
    event_id = (ch.run, ch.subrun, ch.event)

    # Fill histogram and reset analysis variables @ event boundary
    # Event boundary is 
    if last_event_id and not event_id == last_event_id:
        if max_npe > cut_value:
            distance = u_dist / total_npe
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
        u_dist    = 0.
        total_npe = 0.
        # Update the max npe per event
    if ch.flash_npe > max_npe:
        max_npe   = ch.flash_npe
        
    # Now instead we're going to get all of them, and multiply by npe for that specific one
    u_dist       += ch.flash_npe * abs(ch.flash_z - ch.mc_start_z)
    total_npe    += ch.flash_npe
    ctr          += 1
    last_event_id = tuple(event_id)

hist.Fill(distance)
print "Under_ctr: " + str(under_ctr)
print "Ctr:       "
print "Efficiency: " + str(100 - 100. * under_ctr / ctr) + "%"
print "Press <ENTER> to see histogram"
sys.stdin.readline()
hist.Draw("COLZ")
c.Update()
print "Press <ENTER> to exit"
sys.stdin.readline()
