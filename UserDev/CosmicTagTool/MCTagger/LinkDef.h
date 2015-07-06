//
// cint script to generate libraries
// Declaire namespace & classes you defined
// #pragma statement: order matters! Google it ;)
//

#ifdef __CINT__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ class larlite::MCTag+;
#pragma link C++ class larlite::MCShowerTagger+;
#pragma link C++ class larlite::testCosmicTag+;
#pragma link C++ class CosmicTagAlgo+;
#pragma link C++ class std::vector<geoalgo::Trajectory>+;

//ADD_NEW_CLASS ... do not change this line

#endif





