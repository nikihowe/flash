import sys
import math
import ROOT

# Shows what a gaus fit looks like on the data with cut value 5
# Uses npe-weighted position

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

while ctr < ch.GetEntries():

    if ctr%10000==0:
        print "done",ctr,"..."
        
    ch.GetEntry(ctr)
    event_id = (ch.run, ch.subrun, ch.event)

    # Fill histogram and reset analysis variables @ event boundary
    if last_event_id and not event_id == last_event_id:
        if max_npe > cut_value:
            distance = u_dist / total_npe
            hist.Fill(last_start_z - distance)
        else:
            under_ctr += 1

        # Reset all the values for the next event
        total_distance += distance
        distance  = 1000.
        max_npe   = 0.
        start_z   = 0.
        u_dist    = 0.
        total_npe = 0.
        evt_ctr  += 1

    if ch.flash_npe > max_npe:
        max_npe   = ch.flash_npe
        
    # Now instead we're going to get all of them, and multiply by npe for that specific one
    u_dist       += ch.flash_npe * ch.flash_z
    total_npe    += ch.flash_npe
    last_event_id = tuple(event_id)
    last_start_z  = ch.mc_start_z

    # Increment the counter
    ctr          += 1

# Now we need to treat the very last event    
if max_npe > cut_value:
    hist.Fill(last_start_z - distance)
else:
    under_ctr += 1
ctr += 1
evt_ctr += 1
print "Under_ctr:  " + str(under_ctr)
print "Evt_ctr:    " + str(evt_ctr)
print "Efficiency: " + str(100 - 100. * under_ctr / evt_ctr) + "%"
hist.SetLineWidth(2)
hist.SetLineColor(ROOT.kRed)
hist.SetFillStyle(3002)
hist.SetFillColor(ROOT.kRed)

hist.Draw()
c1.Update()


gist = ROOT.TH1D("gist", "", 100, -200, 200)

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

    # Fill gistogram and reset analysis variables @ event boundary
    if last_event_id and not event_id == last_event_id:
        if max_npe > cut_value:
            distance = abs(assoc_z - start_z)
            gist.Fill(start_z - assoc_z)
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

gist.Fill(start_z - assoc_z)
print "Under_ctr: " + str(under_ctr)
print "Ctr:       "
print "Efficiency: " + str(100. * under_ctr / ctr)
gist.SetLineWidth(2)
gist.SetLineColor(ROOT.kBlue)
gist.SetFillStyle(3002)
gist.SetFillColor(ROOT.kBlue)
gist.Draw("sames")
c1.Update()

c1.SaveAs("weighted_vs_unweighted.png")
