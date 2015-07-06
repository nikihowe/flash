import sys
import ROOT
c = ROOT.TCanvas("c","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

ctr = 0
hist_ctr = 1
hist = ROOT.TH2D("hist%d" % hist_ctr, "Histogram", 100, 0, 1000, 100, -117, 117)
while 1:
    
    ch.GetEntry(ctr+1)
    next_event_id = (ch.run, ch.subrun, ch.event)

    ch.GetEntry(ctr)
    event_id = (ch.run, ch.subrun, ch.event)
    
    if next_event_id == event_id:
        hist.Fill(ch.flash_z, ch.flash_y)
        ctr += 1
    else:
        ctr += 1
        hist.Fill(ch.flash_z, ch.flash_y)
        hist_ctr += 1
        hist.Draw("COLZ")
        c.Update()
        user_input = sys.stdin.readline()
        hist.Reset()
