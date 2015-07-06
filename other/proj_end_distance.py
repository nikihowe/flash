import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

distance = 1000.
total_distance = 0.
end_graph = ROOT.TGraph()

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
        d1 = abs(ch.flash_z - ch.mc_end_z)
        if d1 < distance:
            distance = d1
        ctr += 1
        print "Temp Dist: " + str(distance)
    else:
        ctr += 1
        d1 = abs(ch.flash_z - ch.mc_end_z)
        if d1 < distance:
            distance = d1
        print "Temp Dist: " + str(distance)
        print "Final Distance"
        end_graph.SetPoint(evt_ctr, evt_ctr, distance)
        total_distance += distance
        evt_ctr += 1
        distance = 1000.

    print ctr
    
    if ctr == (tot_entries+1):
        print "Total number of events analyzed: " + str(evt_ctr)
        print "Average distance: " + str(total_distance/evt_ctr)
        print ""
        print "Hit <ENTER> to see the graphs"
        sys.stdin.readline() 
        end_graph.SetMarkerStyle(20)
        end_graph.SetMarkerSize(1)
        end_graph.SetMinimum(0)
        end_graph.SetTitle("end_graph")
        end_graph.SetMarkerColor(ROOT.kBlue)
        end_graph.Draw("AP")
        c.Update()
