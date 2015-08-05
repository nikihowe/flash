import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600, 500)
ch = ROOT.TChain("match_tree")
ch.AddFile("ana_ophit.root")

hist = ROOT.TH1D("hist", "Difference in PMT-constructed time and mc-truth start time", 100, -.1, 0)
hist.GetXaxis().SetTitle("#DeltaT [us]")

ctr = 0

while 1:
    
    ch.GetEntry(ctr)
    if ch.tpc_time > -1600:
        hist.Fill(ch.tpc_time - ch.flash_time)
    
    print ctr 
    if ctr == ch.GetEntries():
        c.cd()
        hist.Draw()
        c.Update()
        break
    ctr += 1
hist.Draw()
c.Update()
c.SaveAs("initial_t_diff.png")
c.SaveAs("initial_t_diff.C")
print "Hit <ENTER> to exit"
sys.stdin.readline()
