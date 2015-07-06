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

hist = ROOT.TH1D("hist", "Npe-weighted gaus fit with cut value 5", 200, -500., 500.)
hist.GetXaxis().SetTitle("mc_start_z - npe-weighted flash_z")

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

hist.Draw()
c1.Update()
c1.SaveAs("weighted_gaus.png")
print "STD:  " + str(fit.GetParameter(2))
