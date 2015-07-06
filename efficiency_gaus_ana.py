import ROOT
import sys
#
# Example to read an input file
#

contents = open('output_gaus.txt', 'r').read().split('\n')
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
    g.SetPoint(i, 2+2*i, y_data[i])
    f.SetPoint(i, 2+2*i, x_data[i])

c = TCanvas("c", "", 600, 500)
g.SetTitle("Gaus fit STD and Efficiency wrt cut value; Cut Value (npe); STD (npe-weighted) (Blue) / Efficiency (Red)")
g.SetMinimum(70)
g.SetMaximum(150)
g.SetMarkerSize(1)
g.SetMarkerStyle(20)
g.SetMarkerColor(ROOT.kRed)
g.Draw("AP")
f.SetMarkerSize(1)
f.SetMarkerStyle(20)
f.SetMarkerColor(ROOT.kBlue)
f.Draw("P")

c.Update()

# Wait till exit
ctr += 1
sys.stdin.readline()
