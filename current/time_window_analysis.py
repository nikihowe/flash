import ROOT
#
# Example to read an input file
#

contents = open('time_window_output.txt', 'r').read().split('\n')
ctr = 0
# Don't understand "contents"? do "print" :)
for line in contents:
    print "the current line is: " + str(line)

    x_data = []
    
    if len(line.split()) < 1: continue # Deals with the very last case
    print line.split()
    count = 0
    for entry in line.split():
        x_data.append(float(line.split()[count]))
        count += 1
    print "this is what x_data is: " + str(x_data)
    # Plot using ROOT
    from ROOT import TGraph, TCanvas
    
    hist = ROOT.TH1D("hist", "Time window data with window size " + str(ctr*2 +2) + " and cut at 5", 100, -120, 120)
    
    for i in xrange(len(x_data)):
        
        hist.Fill(x_data[i])
        
    c = TCanvas("c", "", 600, 500)
    hist.Draw()
    c.SaveAs("time_window_" + str(ctr*2 +2) + ".png")
    c.SaveAs("time_window_" + str(ctr*2 +2) + ".C")    
    
    # Wait till exit
    import sys
    ctr += 1
