import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600, 500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

hist = ROOT.TH1D("hist", "Difference in PMT-constructed position and mc-truth start position", 100, -1200, 1200)
hist.GetXaxis().SetTitle("flash_z - mc_start_z")

ctr = 0

while 1:
    
    ch.GetEntry(ctr)
    hist.Fill(ch.flash_z - ch.mc_start_z)
    
    print ctr 
    if ctr == ch.GetEntries():
        c.cd()
        hist.Draw()
        c.Update()
        break
    ctr += 1
hist.Draw()
c.Update()
c.SaveAs("initial_z_diff.png")
c.SaveAs("initial_z_diff.C")
print "Hit <ENTER> to exit"
sys.stdin.readline()
