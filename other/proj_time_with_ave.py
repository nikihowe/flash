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
tot_z = 0.
single_ctr = 0 
print "There are " + str(tot_entries) + " entries in this TChain"

while 1:

    # here we find the min z distance for every point
    ch.GetEntry(ctr+1)
    next_event_id = (ch.run, ch.subrun, ch.event)

    ch.GetEntry(ctr)
    event_id = (ch.run, ch.subrun, ch.event)
    
    if next_event_id == event_id:
        ctr += 1
        single_ctr += 1
        tot_z += ch.flash_z
    else:
        ctr += 1
        single_ctr += 1
        evt_ctr += 1
        print evt_ctr
        tot_z += ch.flash_z
        ave_z = tot_z / single_ctr
        distance = abs(ave_z - ch.mc_start_z)
        start_graph.SetPoint(evt_ctr, distance, ch.flash_t)
        start_graph.SetMarkerStyle(20)
        start_graph.SetMarkerSize(1)
        start_graph.SetMinimum(3000)
        start_graph.SetMaximum(3300)
        start_graph.SetTitle("start_graph")
        start_graph.GetXaxis().SetTitle("abs(ave_z-mc_start_z)")
        start_graph.GetYaxis().SetTitle("flash_t")
        start_graph.SetMarkerColor(ROOT.kBlue)
        if evt_ctr > 1:
            start_graph.Draw("P")
        else:
            start_graph.Draw("AP")
        c.Update()
        tot_z = 0
        single_ctr = 0

