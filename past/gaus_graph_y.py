import sys
import math
import ROOT

# Set the output file
fout = open("output_gaus.txt", "w")

c = ROOT.TCanvas("c", "", 600, 500)
g1 = ROOT.TGraph() # what we will ultimately plot

# Loop over values of X
x_values = [(x+1)*5 for x in xrange(1)] # makes [5,10,15,20,25,30,35,40,45,50, ..., 100]
print x_values
for i in x_values:
    
    # Set the cut value #
    cut_value = i    
    # Set the cut value #

    #c = ROOT.TCanvas("c","", 600,500)
    ch = ROOT.TChain("flash_tree")
    ch.AddFile("niki_tree.root")

    hist = ROOT.TH1D("hist", "Cut Value: " + str(cut_value), 200, -120., 120.)
    hist.GetXaxis().SetTitle("distance")
    
    ctr = 0
    max_npe = 0.
    distance = 1000.
    tot_entries = ch.GetEntries()
    last_event_id = None
    total_distance = 0.
    under_ctr = 0
    start_y = 0.
    u_dist = 0
    total_npe = 0.
    last_start_y = 0.
    evt_ctr = 0
    
    while ctr < ch.GetEntries():

        if ctr%10000==0:
            print "done",ctr,"..."
        
        ch.GetEntry(ctr)
        event_id = (ch.run, ch.subrun, ch.event)

        # Fill histogram and reset analysis variables @ event boundary
        if last_event_id and not event_id == last_event_id:
            if max_npe > cut_value:
                distance = u_dist / total_npe
                hist.Fill(distance - last_start_y)
            else:
                under_ctr += 1

            # Reset all the values for the next event
            total_distance += distance
            distance  = 1000.
            max_npe   = 0.
            start_y   = 0.
            u_dist    = 0.
            total_npe = 0.
            evt_ctr  += 1

        if ch.flash_npe > max_npe:
            max_npe   = ch.flash_npe
        
        # Now instead we're going to get all of them, and multiply by npe for that specific one
        u_dist       += ch.flash_npe * ch.flash_y
        total_npe    += ch.flash_npe
        last_event_id = tuple(event_id)
        last_start_y  = ch.mc_start_y

        # Increment the counter
        ctr          += 1

    # Now we need to treat the very last event    
    if max_npe > cut_value:
        hist.Fill(distance - last_start_y)
    else:
        under_ctr += 1
    ctr += 1
    evt_ctr += 1
    print "Under_ctr:  " + str(under_ctr)
    print "Evt_ctr:    " + str(evt_ctr)
    print "Efficiency: " + str(100 - 100. * under_ctr / evt_ctr) + "%"

    hist.Fit("gaus")
    fit = hist.GetFunction("gaus")

    fout.write("For X: " + str(i) + ", ")
    fout.write(" Hist_Mean: " + str(hist.GetMean()))
    fout.write(" Hist_RMS: " + str(hist.GetRMS()))
    fout.write(" Gaus_Mean: " + str(fit.GetParameter(1)))
    fout.write(" Gaus_STD: "  + str(fit.GetParameter(2)))
    fout.write(" Efficiency: " + str(100 - 100. * under_ctr / evt_ctr) + "%")
    fout.write("\n")
    
    print "for X = " + str(i) + ":"
    print "Mean: " + str(fit.GetParameter(1))
    print "STD:  " + str(fit.GetParameter(2))
    print "Just put point at: (" + str(i) + "," + str(fit.GetParameter(2)) + ")"
    evt_ctr = 0.

hist.Draw()
c.Update()
print "Press <ENTER> to exit"
sys.stdin.readline()
