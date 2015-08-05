import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600, 500)
ch = ROOT.TChain("match_tree")
ch.AddFile("ana_ophit.root")

hist = ROOT.TH1D("hist", "Cut: Z-dist > 100cm", 100, -150, 150)
hist.GetXaxis().SetTitle("#DeltaZ [cm]")

def getLength(entry):
    ch.GetEntry(entry)
    return abs(ch.mc_start_z - ch.mc_end_z)
    
ctr = 0

while 1:
    
    ch.GetEntry(ctr)
    if ch.tpc_time > -1600:
        if getLength(ctr) > 75:
            hist.Fill(ch.flash_z - ch.tpc_z)
    if ctr == ch.GetEntries():
        break
    print ctr 
    ctr += 1
hist.Draw("COLZ")
c.Update()
c.SaveAs("z_dist.png")
c.SaveAs("z_dist.C")
print "Hit <ENTER> to exit"
sys.stdin.readline()
