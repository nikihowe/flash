import ROOT
import sys
#
# Example to read an input file
#

contents = open('nonweighted_output_gaus.txt', 'r').read().split('\n')
ctr = 0
x_data = []
y_data = []
for line in contents:
    if len(line.split()) < 1: continue # Deals with the very last case
    x_data.append(float(line.split()[0]))
    y_data.append(float(line.split()[1]))

# Plot using ROOT
print "this is what x_data is: " + str(x_data)
print "this is what y_data is: " + str(y_data)

from ROOT import TGraph, TCanvas
g = ROOT.TGraph()
f = ROOT.TGraph()

for i in xrange(len(x_data)):
    g.SetPoint(i, 5+5*i, y_data[i])
    f.SetPoint(i, 5+5*i, x_data[i])

c = TCanvas("c", "", 600, 500)
g.SetTitle("Width of histogram and Efficiency wrt cut value; Cut Value [#PE]; STD (blue),  Efficiency (red)")
g.SetMinimum(50)
g.SetMaximum(110)
g.SetMarkerSize(1)
g.SetMarkerStyle(20)
g.SetMarkerColor(ROOT.kRed)
g.Draw("AP")
f.SetMarkerSize(1)
f.SetMarkerStyle(20)
f.SetMarkerColor(ROOT.kBlue)
f.Draw("P")

c.Update()
c.SaveAs("stdandefficiency.png")
c.SaveAs("stdandeffeciency.C")
# Wait till exit
ctr += 1
print "Hit <ENTER> to exit"
sys.stdin.readline()
