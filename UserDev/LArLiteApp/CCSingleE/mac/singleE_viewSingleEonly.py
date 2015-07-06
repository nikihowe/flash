import sys, os
from ROOT import gSystem
from ROOT import ertool
from ROOT import larlite as fmwk
from algoviewer import viewAll, view
from seltool.ccsingleeDef import GetCCSingleEInstance

if len(sys.argv) < 2:
    msg  = '\n'
    msg += "Usage 1: %s $INPUT_ROOT_FILE\n" % sys.argv[0]
    msg += '\n'
    sys.stderr.write(msg)
    sys.exit(1)

# Create ana_processor instance
my_proc = fmwk.ana_processor()
my_proc.enable_filter(True)

# Get Default CCSingleE Algorithm instance
# this sets default parameters
# this information is loaded from:
# $LARLITE_BASEDIR/python/seltool/GetCCSingleEInstance
# and the algorithm instance is the return of the
# function GetCCSingleEInstance()
my_algo = GetCCSingleEInstance()

# Create ERTool filter
# This filter removes any track that
# is less than 3 mm in length
# these tracks exist in "perfect reco"
# but at this stage it is unreasonable
# to assume we will be able to
# reconstruct them
my_filter = ertool.FilterTrackLength()
my_filter.setLengthCut(0.3)


# Create MC Filter
# This filter is if you want to look at CC1E events
MCfilter = fmwk.MC_CC1E_Filter();
#Set flip to FALSE if you are looking for efficiency, TRUE if you are looking for MID efficiency
#MCfilter.flip(False)
MCfilter.flip(True)

# Set input root file
for x in xrange(len(sys.argv)-1):
    my_proc.add_input_file(sys.argv[x+1])

# Specify IO mode
my_proc.set_io_mode(fmwk.storage_manager.kREAD)

# Specify output root file name
my_proc.set_ana_output_file("singleE_selection.root")

# here set E-cut for Helper & Ana modules
#This cut is applied in helper... ertool showers are not made if the energy of mcshower or reco shower
#is below this threshold. This has to be above 0 or else the code may segfault. This is not a "physics cut".
#Do not change this value unless you know what you are doing.
Ecut = 20 # in MeV

my_ana = ertool.ERAnaSingleE()
my_ana.SetDebug(False)
my_ana.SetECut(Ecut)

my_anaunit = fmwk.ExampleERSelection()
my_anaunit._mgr.SetAlgo(my_algo)
my_anaunit._mgr.SetFilter(my_filter)
my_anaunit._mgr.SetAna(my_ana)
my_anaunit.SetMinEDep(100)
my_anaunit._mgr._mc_for_ana = True
# ***************  Set Producers  ****************
# First Argument: True = MC, False = Reco
#my_anaunit.SetShowerProducer(True,"mcreco");
#my_anaunit.SetShowerProducer(False,"davidreco");
#my_anaunit.SetShowerProducer(False,"newdefaultreco");
#my_anaunit.SetShowerProducer(False,"pandoraNuShower");
#my_anaunit.SetShowerProducer(False,"mergeall");
my_anaunit.SetShowerProducer(False,"showerreco");
#my_anaunit.SetShowerProducer(True,"mcreco");
my_anaunit.SetTrackProducer(True,"mcreco");
#my_anaunit.SetTrackProducer(False,"stitchkalmanhit");
#my_anaunit.SetVtxProducer(True,"generator");
# ************************************************
my_proc.add_process(MCfilter)
my_proc.add_process(my_anaunit)


# Start event-by-event loop
counter = 0
while (counter < 1800):
    
    counter = counter + 1
    my_proc.process_event(counter)
    data_reco = my_anaunit.GetData()
    part_reco = my_anaunit.GetParticles()

    print "Particles: {0}".format(part_reco.size())
    print "Event: ", counter
    
    if (part_reco.size() != 1):
        # we found something...lets plot it
        data_mc   = my_anaunit.GetData(True)
        part_mc   = my_anaunit.GetParticles(True)
        print "Processing event {0}".format(counter) 
        # get objets and display
        viewAll(data_mc,part_mc,data_reco,part_reco)

        for x in xrange(part_mc.size()):
            print part_mc[x].Diagram()
            
        try:
            counter = input('Hit Enter to continue to next evt, or type in an event number to jump to that event:')
        except SyntaxError:
            counter = counter

# done!
print
print "Finished running ana_processor event loop!"
print

#my_algo.StoreParams()
sys.exit(0)

