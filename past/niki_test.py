import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600,500)
d = ROOT.TCanvas("d","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")


start_hist = ROOT.TH1D("start_hist", "z-difference between earliest flash and mc_start_z", 200, -.5, 1500)
end_hist   = ROOT.TH1D("end_hist"  , "z-difference between latest flash and mc_end_z", 200, -.5, 1500)
start_hist.GetXaxis().SetTitle("distance from mc_start_z (cm)")
end_hist.GetXaxis().SetTitle("distance from mc_end_z (cm)")
ctr = 0
evt_ctr = 0
tot_entries = ch.GetEntries()
tot_z = 0.
single_ctr = 0
max_t = 0.
min_t = 0.
max_assoc_z = 0.
min_assoc_z = 0.
print "There are " + str(tot_entries) + " entries in this TChain"

while 1:

    # here we find the min z distance for every point
    ch.GetEntry(ctr+1)
    next_event_id = (ch.run, ch.subrun, ch.event)

    ch.GetEntry(ctr)
    event_id = (ch.run, ch.subrun, ch.event)
    
    if next_event_id == event_id:
        ctr += 1
        if ch.flash_t < min_t:
            min_t = ch.flash_t
            min_assoc_z = ch.flash_z
        if ch.flash_t > max_t:
            max_t = ch.flash_t
            max_assoc_z = ch.flash_z
    else:
        ctr += 1
        single_ctr += 1
        evt_ctr += 1

        if ch.flash_t < min_t:
            min_t = ch.flash_t
            min_assoc_z = ch.flash_z
        if ch.flash_t > max_t:
            max_t = ch.flash_t
            max_assoc_z = ch.flash_z
            
        d1 = abs(min_assoc_z - ch.mc_start_z)
        d2 = abs(min_assoc_z - ch.mc_end_z)   
        d3 = abs(max_assoc_z - ch.mc_start_z) 
        d4 = abs(max_assoc_z - ch.mc_end_z)   

        if d1 + d4 < d2 + d3:
            start_distance = d1
            end_distance = d4
        else:
            start_distance = d3
            end_distance = d2
        
        start_hist.Fill(start_distance)
        end_hist.Fill(end_distance)

        # Reset vars
        start_distance = 0
        end_distance   = 0

        # Remember where we are
        print ctr
        
    if ctr == tot_entries:
        c.cd()
        start_hist.Draw()
        c.Update()
        d.cd()
        end_hist.Draw()
        d.Update()
        break
print "Hit <ENTER> to exit"
sys.stdin.readline()
