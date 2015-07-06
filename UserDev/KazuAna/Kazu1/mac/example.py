import sys
from ROOT import gSystem
gSystem.Load("libKazuAna_Kazu1")
from ROOT import sample

try:

    print "PyROOT recognized your class %s" % str(sample)

except NameError:

    print "Failed importing Kazu1..."

sys.exit(0)

