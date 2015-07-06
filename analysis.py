
fout = open('niki.txt', 'w')

x_data = [0., 1., 2., 3., 4.,  5.]
y_data = [0., 2., 4., 6., 8., 10.]

for i in xrange(len(x_data)):
    fout.write('%g %g\n' % (x_data[i], y_data[i]))
fout.close()

#
# Example to read an input file
#

contents = open('output_gaus.txt', 'r').read().split('\n')

# Don't understand "contents"? do "print" :)

x_data = []
y_data = []

for line in contents:
    if len(line.split()) < 1: continue
    
    x_data.append(float(line.split()[0]))
    y_data.append(float(line.split()[1]))

# Plot using ROOT
from ROOT import TGraph, TCanvas

g = TGraph(len(x_data))

for i in xrange(len(x_data)):

    g.SetPoint(i, x_data[i], y_data[i])

c = TCanvas("c", "", 600, 500)
g.SetTitle("Dumb Plot by Kazu; X-axis; Y-axis")
g.SetMarkerSize(1)
g.SetMarkerStyle(20)
g.Draw("AP")
c.Update()
# Wait till exit
import sys
sys.stdin.readline()
