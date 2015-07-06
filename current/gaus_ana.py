import ROOT
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

for i in xrange(len(x_data)):
    g.SetPoint(i, 2+2*i, x_data[i])
    
c = TCanvas("c", "", 600, 500)
g.SetTitle("STD of gaus fit wrt cut value (npe weighted distances); Cut Value (npe); STD")
g.SetMarkerSize(1)
g.SetMarkerStyle(20)
g.Draw("AP")
c.Update()

# Wait till exit
import sys
ctr += 1
sys.stdin.readline()
