import sys
import ROOT
c = ROOT.TCanvas("c","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

# Set the initial values
ctr = 0
evt_ctr = 0
g1 = ROOT.TGraph()
g2 = ROOT.TGraph()
min = 1000.
max = 0.

while 1:
    
    ch.GetEntry(ctr+1)
    next_event_id = (ch.run, ch.subrun, ch.event)

    ch.GetEntry(ctr)
    event_id = (ch.run, ch.subrun, ch.event)
    
    if next_event_id == event_id:
        print ctr

        # Now we find the min and max
        if ch.flash_t < min:
            min = ch.flash_t
        if ch.flash_t > max:
            max = ch.flash_t
            
        g1.SetPoint(ctr, abs(ch.flash_z-ch.mc_start_z), ch.flash_t)
        ctr += 1
    else:
    
        # Same things as in *if*, but this is the last time
        # we do it for this event
        ctr += 1
        evt_ctr += 1

        if ch.flash_t < min:
            min = ch.flash_t
        if ch.flash_t > max:
            max = ch.flash_t
        
        g1.SetPoint(evt_ctr, abs(ch.flash_z-ch.mc_start_z), ch.flash_t)
        g1.SetMarkerStyle(20)
        g1.SetMarkerSize(1)
        g1.SetMinimum(min * 1.1)
        g1.SetMaximum(max * 1.1)
        g1.SetTitle("abs(ch.flash_z-ch.mc_start_z) vs ch.flash_t")
        g1.GetXaxis().SetTitle("flash_t")
        g1.GetYaxis().SetTitle("abs(flash_z - mc_start_z)")
        g1.SetMarkerColor(ROOT.kBlue)
        
        g1.Draw("AP")
     
        c.Update()
        user_input = sys.stdin.readline()

        # Reset everything
        min = 1000.
        max = 0.
        g1 = ROOT.TGraph()
        g1.SetTitle("g1")
