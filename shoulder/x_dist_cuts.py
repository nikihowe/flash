import sys
import math
import ROOT

c = ROOT.TCanvas("c","", 600, 500)
ch = ROOT.TChain("match_tree")
ch.AddFile("ana_ophit.root")

hist = ROOT.TH1D("hist", "Worry Later", 100, -150, 150)
hist.GetXaxis().SetTitle("#DeltaZ [cm]")

def getLength(entry):
    ch.GetEntry(entry)
    return math.sqrt((ch.mc_start_z - ch.mc_end_z)**2 + (ch.mc_start_y - ch.mc_end_y)**2 + (ch.mc_start_x - ch.mc_start_x)**2)
    
ctr = 0

while 1:
    
    ch.GetEntry(ctr)
    if ch.tpc_time > -1600:
        if (ch.mc_start_x + ch.mc_end_x)/2 > 100:
            hist.Fill(ch.flash_z - ch.tpc_z)
    if ctr == ch.GetEntries():
        break
    print ctr 
    ctr += 1
hist.Draw()
c.Update()
c.SaveAs("x_dist_cuts.png")
c.SaveAs("x_dist_cuts.C")
print "Hit <ENTER> to exit"
sys.stdin.readline()
