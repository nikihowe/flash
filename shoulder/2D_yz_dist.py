import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600, 500)
ch = ROOT.TChain("match_tree")
ch.AddFile("ana_ophit.root")

hist = ROOT.TH2D("hist", "Difference in PMT-constructed position and mc-truth start position", 100, -150, 150, 100, 0, 1200)
hist.GetXaxis().SetTitle("#DeltaZ [cm]")
hist.GetYaxis().SetTitle("yz length [cm]")
def getLength(entry):
    ch.GetEntry(entry)
    return math.sqrt((ch.mc_start_z - ch.mc_end_z)**2 + (ch.mc_start_y - ch.mc_end_y)**2 )
    
ctr = 0

while 1:
    
    ch.GetEntry(ctr)
    if ch.tpc_time > -1600:
        hist.Fill(ch.flash_z - ch.tpc_z, getLength(ctr))
    if ctr == ch.GetEntries():
        c.cd()
        hist.Draw()
        c.Update()
        break
    print ctr 
    ctr += 1
hist.Draw("COLZ")
c.Update()
c.SaveAs("2D_yz_dist.png")
c.SaveAs("2D_yz_dist.C")
print "Hit <ENTER> to exit"
sys.stdin.readline()
