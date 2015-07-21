import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

hist = ROOT.TH1D("hist", "Difference in PMT-constructed position and mc-truth start position", 100, -130, 130)
hist.GetXaxis().SetTitle("#DeltaY [cm]")

ctr = 0

while 1:
    
    ch.GetEntry(ctr)
    hist.Fill(ch.flash_y - ch.mc_start_y)
    
    print ctr 
    if ctr == ch.GetEntries():
        c.cd()
        hist.Draw()
        c.Update()
        break
    ctr += 1
hist.Draw()
c.Update()
c.SaveAs("initial_y_diff.png")
c.SaveAs("initial_y_diff.C")
print "Hit <ENTER> to exit"
sys.stdin.readline()
