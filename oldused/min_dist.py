import sys
import ROOT

# METHODS #

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

ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")
c = ROOT.TCanvas("c", "", 600, 500)        
hist = ROOT.TH1D("hist", "Minimum distance of any flash in an event from mc_start_z", 200, -120, 120)
hist.GetXaxis().SetTitle("min distance")

# Set preliminary values to avoid ogetting messed up in the future
endpoint = 0
ctr = 0
total_min_dist = 0
while 1:
    endpoint = getEndpoint(ctr)
    min_dist = 1000
    signed_min_dist = 1000
    while ctr < endpoint:
        ch.GetEntry(ctr)
        d1 = abs(ch.flash_z - ch.mc_start_z)
        if d1 < min_dist:
            signed_min_dist = ch.mc_start_z - ch.flash_z
            min_dist = d1
        ctr += 1
    hist.Fill(signed_min_dist)
    total_min_dist += min_dist
    ctr = endpoint
    print ctr
    if not ctr < ch.GetEntries():
        break
hist.Draw()
c.Update()
print "The average min dist is: " + str(total_min_dist / 9999)
print "Hit <ENTER> to exit"
sys.stdin.readline()
