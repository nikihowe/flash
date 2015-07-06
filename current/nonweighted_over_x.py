import sys
import math
import ROOT

# Set the output file
fout = open("nonweighted_output_gaus.txt", "w")
ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")
c1 = ROOT.TCanvas("c", "", 600, 500)
g1 = ROOT.TGraph()
ctr = 0
endpoint = 0

# Given a starting ctr number, returns the ctr
# of the first point in the next event
def getEndpoint(start_ctr):
    last_event_id = None
    while start_ctr < ch.GetEntries():
        ch.GetEntry(start_ctr)
        event_id = (ch.run, ch.subrun, ch.event)
        if last_event_id and not event_id == last_event_id:
            break
        last_event_id = event_id
        start_ctr += 1
    return start_ctr

# Given a set of flashes, determines whether they will
# make a given energy cut
def makesCut(start_ctr, end_ctr, cut):
    maxnpe = 0.
    while start_ctr < end_ctr:
        ch.GetEntry(start_ctr)
        if ch.flash_npe > maxnpe:
            maxnpe = ch.flash_npe
        start_ctr += 1
    if maxnpe > cut:
        return True
    else:
        return False

# Method to find the flash with max npe in any given set of flashes
# returns the flash_z of the flash with max npe
def getMaxNpeZ(start_ctr, end_ctr):
    maxval = 0.
    flash_z = None
    while start_ctr < end_ctr:
        ch.GetEntry(start_ctr)
        if ch.flash_npe > maxval:
            maxval = ch.flash_npe
            flash_z = ch.flash_z
        start_ctr += 1
    return flash_z

def getMaxNpe(start_ctr, end_ctr):
    maxval = 0.
    while start_ctr < end_ctr:
        ch.GetEntry(start_ctr)
        if ch.flash_npe > maxval:
            maxval = ch.flash_npe
            flash_z = ch.flash_z
        start_ctr += 1
    return maxval

# Main program
# Loop over values of X
x_values = [(x+1)*5 for x in xrange(20)] # makes [5,10,15,20,25,30,35,40,45,50, ..., 100]
print x_values

for i in x_values:
    ctr = 0
    under_ctr = 0
    cut_value = i
    hist = ROOT.TH1D("hist", "Cut Value: " + str(cut_value), 100, -500., 500.)
    while 1:
        print "ctr: " + str(ctr)
        endpoint = getEndpoint(ctr)
        print "end: " + str(endpoint)
        if makesCut(ctr, endpoint, cut_value):
            hist.Fill(ch.mc_start_z - getMaxNpeZ(ctr, endpoint))
        else:
            under_ctr += 1
        ctr = endpoint
        print "just changed ctr to: " + str(endpoint)
        if ctr == ch.GetEntries():
            break
    hist.Fit("gaus")
    fit = hist.GetFunction("gaus")
    print "Just fit histogram"
    fout.write(str(fit.GetParameter(2)))
    fout.write(" ")
    fout.write(str(100 - 100* (1.*under_ctr / 9999)))
    fout.write("\n")
    print "Finished the job for i: " + str(i)
