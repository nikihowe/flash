import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

distance = 1000.
start_graph = ROOT.TGraph()

ctr = 0
evt_ctr = 0
tot_entries = ch.GetEntries()
print "There are " + str(tot_entries) + " entries in this TChain"

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
        ctr += 1
        print "Temp Dist: " + str(distance)
    else:
        ctr += 1
        d1 = abs(ch.flash_z - ch.mc_start_z)
        if d1 < distance:
            distance = d1
        print "Temp Dist: " + str(distance)
        print "Final Distance"
        start_graph.SetPoint(evt_ctr, evt_ctr, distance)    
        evt_ctr += 1
        distance = 1000.

    print ctr
    
    if ctr == (tot_entries+1):
        print "Total number of events analyzed: " + str(evt_ctr)
        print "Hit <ENTER> to see the graphs"
        sys.stdin.readline() 
        start_graph.SetMarkerStyle(20)
        start_graph.SetMarkerSize(1)
        start_graph.SetMinimum(0)
        start_graph.SetTitle("start_graph")
        start_graph.SetMarkerColor(ROOT.kBlue)
        start_graph.Draw("AP")
        c.Update()
