import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

distance = 1000.
max_npe = 0.
assoc_z = 0.
total_distance = 0.
start_graph = ROOT.TGraph()

ctr = 0
evt_ctr = 1
tot_entries = ch.GetEntries()
print "There are " + str(tot_entries) + " entries in this TChain"

while 1:

    # here we find the min z distance for every point
    ch.GetEntry(ctr+1)
    next_event_id = (ch.run, ch.subrun, ch.event)

    ch.GetEntry(ctr)
    event_id = (ch.run, ch.subrun, ch.event)
    
    if next_event_id == event_id:
        if ch.flash_npe > max_npe:
            max_npe = ch.flash_npe
            assoc_z = ch.flash_z
        ctr += 1
    
    else:
        if ch.flash_npe > max_npe:
            max_npe = ch.flash_npe
            assoc_z = ch.flash_z

        # distance is the abs of the different in z value associated to max npe and actual start
        distance = abs(assoc_z - ch.mc_start_z)

        # put the point in the graph
        start_graph.SetPoint(evt_ctr, evt_ctr, distance)    

        # count/reset everything
        ctr += 1
        evt_ctr += 1
        total_distance += distance
        distance = 1000.
        max_npe = 0.
        assoc_z = 0.
    print ctr
    
    if ctr == (tot_entries+1):
        print "Total number of events analyzed: " + str(evt_ctr)
        print "Average distance: " + str(total_distance/evt_ctr)
        print ""
        print "Hit <ENTER> to see the graphs"
        sys.stdin.readline() 
        start_graph.SetMarkerStyle(20)
        start_graph.SetMarkerSize(1)
        start_graph.SetMinimum(0)
        start_graph.SetTitle("start_graph")
        start_graph.SetMarkerColor(ROOT.kBlue)
        start_graph.Draw("AP")
        c.Update()
