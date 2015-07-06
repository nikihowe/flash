import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600,500)
d = ROOT.TCanvas("d","", 600,500)
e = ROOT.TCanvas("e","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

g1 = ROOT.TGraph() # will hold the max points
g2 = ROOT.TGraph() # will hold the min points
min_z = 1000.      # set the min to a value that will definitely be changed
max_z = 0.         # same idea for the max
hist = ROOT.TH1D("hist", "", 200, -.5, 1500)
start_hist = ROOT.TH1D("start_hist", "", 200, -.5, 1500)
end_hist = ROOT.TH1D("end_hist", "", 200, -.5, 1500)

ctr = 0
evt_ctr = 0
neg_ctr = 0
tot_entries = ch.GetEntries()
print "There are " + str(tot_entries) + " entries in this TChain"
print "Press any key to continue"
sys.stdin.readline()
while 1:
    
# Here we find the max and min for each event
    ch.GetEntry(ctr+1)
    next_event_id = (ch.run, ch.subrun, ch.event)

    ch.GetEntry(ctr)
    event_id = (ch.run, ch.subrun, ch.event)
    
    if next_event_id == event_id:
        if ch.flash_z > max_z:
            max_z = ch.flash_z
            max_assoc_y = ch.flash_y
        if ch.flash_z < min_z:
            min_z = ch.flash_z
            min_assoc_y = ch.flash_y
        ctr += 1
    else:
        evt_ctr += 1
        ctr += 1
        if ch.flash_z > max_z:
            max_z = ch.flash_z
            max_assoc_y = ch.flash_y
        if ch.flash_z < min_z:
            min_z = ch.flash_z
            min_assoc_y = ch.flash_y

# This checks if they are negative. Note that we will have one of these checks per event.
        if ch.mc_start_z < 0.:
            neg_ctr += 1
        if ch.mc_end_z < 0.:
            neg_ctr += 1

    d1 = math.sqrt((min_z-ch.mc_start_z)**2 + (min_assoc_y-ch.mc_start_y)**2)
    d2 = math.sqrt((min_z-ch.mc_end_z)**2   + (min_assoc_y-ch.mc_end_y)**2)
    d3 = math.sqrt((max_z-ch.mc_start_z)**2 + (max_assoc_y-ch.mc_start_y)**2)
    d4 = math.sqrt((max_z-ch.mc_end_z)**2   + (max_assoc_y-ch.mc_end_y)**2)
    
    if d1 + d4 < d2 + d3:
        distance = d1 + d4
    else:
        distance = d2 + d3
    
    hist.Fill(distance)
    start_hist.Fill(ch.mc_start_z)
    end_hist.Fill(ch.mc_end_z)

#    print "number of events:    " + str(evt_ctr)
#    print "number of negatives: " + str(neg_ctr)

    print ctr
    
    if ctr == tot_entries:
        print "The proportion of negative start/end to not is: " + str((neg_ctr+0.)/(evt_ctr+0.))
        sys.stdin.readline() 
        c.cd()
        hist.Draw()
        c.Update()
        d.cd()
        start_hist.Draw()
        d.Update()
        e.cd()
        end_hist.Draw()
        e.Update()
