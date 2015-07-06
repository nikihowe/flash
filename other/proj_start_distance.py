import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

distance = 1000.
total_distance = 1.
start_graph = ROOT.TH1D("hist", "Minimum distance of flash point from actual mc_start_z", 200, 600, 500)

ctr = 0
evt_ctr = 0

point_ctr = 0
while 1:

    # here we find the min z distance for every point
    ch.GetEntry(ctr+1)
    next_event_id = (ch.run, ch.subrun, ch.event)

    ch.GetEntry(ctr)
    event_id = (ch.run, ch.subrun, ch.event)
    
    if next_event_id == event_id:
        d1 = abs(ch.flash_z - ch.mc_start_z)
        if d1 < distance:
            distance = d1
            signed_dist = ch.flash_z - ch.mc_start_z
        ctr += 1
        print "Temp Dist: " + str(distance)
    else:
        ctr += 1
        d1 = abs(ch.flash_z - ch.mc_start_z)
        if d1 < distance:
            distance = d1
        signed_dist = ch.flash_z - ch.mc_start_z    
        print "Temp Dist: " + str(distance)
        print "Final Distance"
        start_graph.Fill(signed_dist)
        point_ctr += 1
        evt_ctr += 1
        total_distance += distance
        distance = 1000.

    print ctr
    
    if ctr == ch.GetEntries():
        print "Total number of events analyzed: " + str(evt_ctr)
        print "Average distance: " + str(total_distance/evt_ctr)
        print ""
        print "Hit <ENTER> to see the graphs"
        sys.stdin.readline() 
        start_graph.Draw()
        c.Update()
        break
print "Press <ENTER> to exti"
sys.stdin.readline()
