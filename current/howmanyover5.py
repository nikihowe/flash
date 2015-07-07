import sys
import math
import ROOT
import numpy

ch = ROOT.TChain("flash_tree")
ch.AddFile("niki_tree.root")
        
# Set the cut value here
cut_value = 5

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

# Main script
ctr = 0
zero = 0
one = 0
two = 0
three = 0
four = 0
more = 0
while 1:
    number = 0
    endpoint = getEndpoint(ctr)
    if 1:
        while ctr < endpoint:
            ch.GetEntry(ctr)
            if ch.flash_npe > 5:
                number += 1
                print "filled!"
            ctr += 1
        print "end of event"
        if number ==  0:
            zero += 1
        elif number == 1:
            one += 1
        elif number == 2:
            two += 1
        elif number == 3:
            three += 1
        elif number == 4:
            four += 1
        else:
            more += 1
        print ctr
    if not ctr < ch.GetEntries():
        break
print zero, one, two, three, four, more
print "Hit <ENTER> to exit"
sys.stdin.readline()
