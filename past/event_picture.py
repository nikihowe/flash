import sys
import ROOT
c = ROOT.TCanvas("c","", 600,500)
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")

# Set up methods

# Given a starting ctr number, returns the ctr
# of the first point in the next event
def getEndpoint(start_ctr):
    if ctr < endpoint:
        return endpoint
    last_event_id = None
    while start_ctr < ch.GetEntries():
        ch.GetEntry(start_ctr)
        event_id = (ch.run, ch.subrun, ch.event)
        if last_event_id and not event_id == last_event_id:
            break
        last_event_id = event_id
        start_ctr += 1
    return start_ctr

# Start of original program
ctr = 0
evt_ctr = 0
total_entries = ch.GetEntries()
endpoint = 0

while 1:

    point_ctr = 0
    
    start_ctr = ctr
    print "Current Startpoint is: " + str(start_ctr)
    
    endpoint = getEndpoint(ctr)
    print "Current Endpoint is: " + str(endpoint)
    
    g1 = ROOT.TGraph(ctr - endpoint)
    g2 = ROOT.TGraph(1)
    g3 = ROOT.TGraph(1)

    while start_ctr < endpoint:
        ch.GetEntry(start_ctr)
        g1.SetPoint(point_ctr, ch.flash_z, ch.flash_y)
        start_ctr += 1
        point_ctr += 1
        print "Just added point at " + str(ch.flash_z) + ", " + str(ch.flash_y)
    ctr = endpoint

    g1.SetMarkerStyle(20)
    g1.SetMarkerSize(1)
    g1.SetMinimum(-120)
    g1.SetMaximum(120)
    g1.SetTitle("Event " + str(evt_ctr))
    g1.GetXaxis().SetTitle("Z [cm]")
    g1.GetYaxis().SetTitle("Y [cm]")
    g1.SetMarkerColor(ROOT.kBlue)       
    g1.Draw("AP")

    g2.SetPoint(0, ch.mc_start_z, ch.mc_start_y)
    print "mc_start is at " + str(ch.mc_start_z) + ", " + str(ch.mc_start_y)
    g2.SetMarkerStyle(20)
    g2.SetMarkerSize(1)
    g2.SetMinimum(-120)
    g2.SetMaximum(120)
    g2.SetMarkerColor(ROOT.kGreen)
    g2.Draw("P")
    
    g3.SetPoint(0, ch.mc_end_z, ch.mc_end_y)
    print "mc_end is at " + str(ch.mc_end_z) + ", " +  str(ch.mc_end_y)
    g3.SetMarkerStyle(20)
    g3.SetMarkerSize(1)
    g3.SetMinimum(-120)
    g3.SetMaximum(120)
    g3.SetMarkerColor(ROOT.kRed)
    g3.Draw("P")

    c.Update()
    c.SaveAs("event_picture_" + str(evt_ctr) + ".png")
    c.SaveAs("event_picture_" + str(evt_ctr) + ".C")
    user_input = sys.stdin.readline()

    evt_ctr += 1
