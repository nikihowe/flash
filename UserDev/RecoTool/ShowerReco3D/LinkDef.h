//
// cint script to generate libraries
// Declaire namespace & classes you defined
// #pragma statement: order matters! Google it ;)
//

#ifdef __CINT__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ namespace showerreco;
#pragma link C++ namespace showerreco::energy;

#pragma link C++ class larlite::ShowerReco3D+;
#pragma link C++ class larlite::ComputePi0Mass+;
#pragma link C++ class larlite::ShowerQuality+;
#pragma link C++ class larlite::HitCalibration+;
//ADD_NEW_CLASS ... do not change this line
#pragma link C++ class showerreco::ShowerRecoException+;
#pragma link C++ class showerreco::ShowerCalo+;
#pragma link C++ class showerreco::ShowerRecoAlgBase+;
#pragma link C++ class showerreco::ShowerRecoAlg+;
#pragma link C++ class showerreco::Pi0ShowerRecoAlg+;
#pragma link C++ class showerreco::ShowerRecoManager+;
#pragma link C++ class showerreco::ShowerRecoTest+;
//ADD_NEW_ALG_CLASS ... do not change this line
#endif

