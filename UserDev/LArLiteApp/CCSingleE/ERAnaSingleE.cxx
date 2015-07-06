#ifndef ERTOOL_ERANASINGLEE_CXX
#define ERTOOL_ERANASINGLEE_CXX

#include "ERAnaSingleE.h"

namespace ertool {

  ERAnaSingleE::ERAnaSingleE() : AnaBase()
			       , _result_tree(nullptr)
			       , fTPC(0.,-115.5,0.,254.8,117.5,1036.92)

  {
    _name     = "ERAnaSingleE";

    if (_result_tree) { delete _result_tree; }
    _result_tree = new TTree("_result_tree","Result Tree");

    _result_tree->Branch("_numEvts",&_numEvts,"numEvts/I");
    _result_tree->Branch("_EDep",&_EDep,"EDep/D");
    _result_tree->Branch("_angle_Norm",&_angle_Norm,"_angle_Norm/D");
    _result_tree->Branch("_n_singleReco",&_n_singleReco,"n_singleReco/I");
    _result_tree->Branch("_distToTopWall",&_distToTopWall,"distToTopWall/D");
    _result_tree->Branch("_distToWall",&_distToWall,"distToWall/D");
    _result_tree->Branch("_distBackAlongTraj",&_distBackAlongTraj,"distBackAlongTraj/D");
    _result_tree->Branch("_n_showers",&_n_showers,"n_showers/I");
    _result_tree->Branch("_n_showersReco",&_n_showersReco,"n_showersReco/I");
    _result_tree->Branch("_n_tracks",&_n_tracks,"n_tracks/I");
    _result_tree->Branch("_n_tracksReco",&_n_tracksReco,"n_tracksReco/I");
    _result_tree->Branch("_n_tracksInt",&_n_tracksInt,"n_tracksInt/I");
    _result_tree->Branch("_n_tracksIntReco",&_n_tracksIntReco,"n_tracksIntReco/I");
    _result_tree->Branch("_n_electrons",&_n_electrons,"n_electrons/I");
    _result_tree->Branch("_n_gammas",&_n_gammas,"n_gammas/I");
    _result_tree->Branch("_e_nu",&_e_nu,"e_nu/D");
    _result_tree->Branch("_e_nuReco",&_e_nuReco,"e_nuReco/D");
    _result_tree->Branch("_x_nu",&_x_nu,"x_nu/D");
    _result_tree->Branch("_y_nu",&_y_nu,"y_nu/D");
    _result_tree->Branch("_z_nu",&_z_nu,"z_nu/D");
    _result_tree->Branch("_px_nu",&_px_nu,"px_nu/D");
    _result_tree->Branch("_py_nu",&_py_nu,"py_nu/D");
    _result_tree->Branch("_pz_nu",&_pz_nu,"pz_nu/D");
    _result_tree->Branch("_x_nuReco",&_x_nuReco,"x_nuReco/D");
    _result_tree->Branch("_y_nuReco",&_y_nuReco,"y_nuReco/D");
    _result_tree->Branch("_z_nuReco",&_z_nuReco,"z_nuReco/D");
    _result_tree->Branch("_px_nuReco",&_px_nuReco,"px_nuReco/D");
    _result_tree->Branch("_py_nuReco",&_py_nuReco,"py_nuReco/D");
    _result_tree->Branch("_pz_nuReco",&_pz_nuReco,"pz_nuReco/D");
    _result_tree->Branch("_n_protons",&_n_protons,"n_protons/I");
    _result_tree->Branch("_n_neutrons",&_n_neutrons,"n_neutrons/I");
    _result_tree->Branch("_e_trkInt",&_e_trkInt,"e_trkInt/D");
    _result_tree->Branch("_e_neutrals",&_e_neutrals,"e_neutrals/D");
    _result_tree->Branch("_e_nucleus_diff",&_e_nucleus_diff,"e_nucleus_diff/D");
    _result_tree->Branch("_e_trkIntReco",&_e_trkIntReco,"e_trkIntReco/D");
    _result_tree->Branch("_n_piplus",&_n_piplus,"n_piplus/I");
    _result_tree->Branch("_n_pi0",&_n_pi0,"n_pi0/I");
    _result_tree->Branch("_pdg_nu",&_pdg_nu,"pdg_nu/I");
    _result_tree->Branch("_e_lep",&_e_lep,"e_lep/D");
    _result_tree->Branch("_pdg_lep",&_pdg_lep,"pdg_lep/I");
    _result_tree->Branch("_x_lep",&_x_lep,"x_lep/D");
    _result_tree->Branch("_y_lep",&_y_lep,"y_lep/D");
    _result_tree->Branch("_z_lep",&_z_lep,"z_lep/D");
    _result_tree->Branch("_px_lep",&_px_lep,"px_lep/D");
    _result_tree->Branch("_py_lep",&_py_lep,"py_lep/D");
    _result_tree->Branch("_pz_lep",&_pz_lep,"pz_lep/D");
    _result_tree->Branch("_theta_lep",&_theta_lep,"theta_lep/D");
    _result_tree->Branch("_phi_lep",&_phi_lep,"phi_lep/D");
    _result_tree->Branch("_e_lepReco",&_e_lepReco,"e_lepReco/D");
    _result_tree->Branch("_showerlength_lepReco",&_showerlength_lepReco,"showerlength_lepReco/D");
    _result_tree->Branch("_theta_lepReco",&_theta_lepReco,"theta_lepReco/D");
    _result_tree->Branch("_phi_lepReco",&_phi_lepReco,"phi_lepReco/D");
    _result_tree->Branch("_x_lepReco",&_x_lepReco,"x_lepReco/D");
    _result_tree->Branch("_y_lepReco",&_y_lepReco,"y_lepReco/D");
    _result_tree->Branch("_z_lepReco",&_z_lepReco,"z_lepReco/D");
    _result_tree->Branch("_px_lepReco",&_px_lepReco,"px_lepReco/D");
    _result_tree->Branch("_py_lepReco",&_py_lepReco,"py_lepReco/D");
    _result_tree->Branch("_pz_lepReco",&_pz_lepReco,"pz_lepReco/D");
    _result_tree->Branch("_px_lepNormReco",&_px_lepNormReco,"px_lepNormReco/D");
    _result_tree->Branch("_py_lepNormReco",&_py_lepNormReco,"py_lepNormReco/D");
    _result_tree->Branch("_pz_lepNormReco",&_pz_lepNormReco,"pz_lepNormReco/D");
    _result_tree->Branch("_lep_dot",&_lep_dot,"_lep_dot/D");
    _result_tree->Branch("_lep_vtxdist",&_lep_vtxdist,"_lep_vtxdist/D");
    _result_tree->Branch("_misID",&_misID,"misID/I");

    // keep track of number of events gone by
    _numEvts = 0;
    // keep track of singleEs found
    _singleE_ctr = 0;

    _debug = false;

    // set default energy cut (for counting) to 0
    _eCut = 0;

    // set initial efficiency to 0
    _eff = 0.;

    _h_e_nu_correlation = new TH2F("h_eNu_eNuReco","True Neutrino Energy vs. Reconstructed Neutrino Energy;True Neutrino Energy [MEV];Reconstructed Neutrino Energy [MEV]",100,0,3000,100,0,3000);

  }

  void ERAnaSingleE::Reset()
  {}

  bool ERAnaSingleE::Analyze(const EventData &data, const ParticleSet &ps)
{

  if (_debug)
    std::cout << "******  Begin ERAnaSingleE Analysis  ******" << std::endl;

    // Get MC particle set
    auto mc_ps = MCParticleSet();

    // Reset tree variables
    // Assume we will mis-ID
    ResetTreeVariables();

    _numEvts += 1;
    // count number of showers in event
    _n_electrons = 0;
    _n_gammas    = 0;

    // Get MC EventData (showers/tracks...)
    auto mc_data = MCEventData();
    // Count number of MC tracks and showers with E > _eCut MeV
    _n_showers   = 0;
    _n_tracks    = 0;
    _n_tracksInt = 0;

    // Keep track of all energy deposited in detector
    _EDep = 0;

    for (auto &s : data.AllShower()){
      _EDep += s._energy;
      if (s._energy > _eCut) { _n_showers += 1; }
    }
    for (auto &t : data.AllTrack()){
      _EDep += t._energy;
      if (t._energy > _eCut) { _n_tracks += 1; }
    }
    if (_debug) { std::cout << "Total Energy deposited in detector: " << _EDep << std::endl; }

    // If debug -> print out MC particle set
    if (_debug){
      std::cout << "MC Particle Tree: " << std::endl;
      for (auto &p : mc_ps)
	std::cout << p.Diagram();
    }


    // loop over all particles in MC particle set (made by Helper)
    for (auto &p : mc_ps){
      // Find the Lepton and store its energy
      if (abs(p.PdgCode()) == 12 || abs(p.PdgCode()) == 14){
	_e_nu = p.Energy();
	_x_nu = p.Vertex()[0];
	_y_nu = p.Vertex()[1];
	_z_nu = p.Vertex()[2];
	_px_nu = p.Momentum()[0];
	_py_nu = p.Momentum()[1];
	_pz_nu = p.Momentum()[2];
	_pdg_nu = p.PdgCode();
	
	bool found_lepton_daughter = false;

	for (auto &nud : p.Daughters()){
	  if (abs(nud.PdgCode()) == 11 || abs(nud.PdgCode()) == 13){
	    if(found_lepton_daughter) 
	      std::cout<<"wtf already found daughter? overwriting variables..."<<std::endl;
	    found_lepton_daughter = true;
	    _e_lep = nud.Energy();
	    _x_lep = nud.Vertex()[0];
	    _y_lep = nud.Vertex()[1];
	    _z_lep = nud.Vertex()[2];
	    _px_lep = nud.Momentum()[0];
	    _py_lep = nud.Momentum()[1];
	    _pz_lep = nud.Momentum()[2];
	    _theta_lep = (180./3.14) * acos( _pz_lep / sqrt( _px_lep*_px_lep + _py_lep*_py_lep + _pz_lep*_pz_lep ) );
	    _phi_lep   = (180./3.14) * asin( _py_lep / sqrt( _px_lep*_px_lep + _py_lep*_py_lep ) );
					     
	    _pdg_lep = nud.PdgCode();
	  }
	}
      }

      // now keep track of all showers and tracks in the event
      _e_neutrals = 0;
      _e_nucleus_diff = 0;
      bool found_parent_nucleus = false;
      for (auto &d : p.AllDaughters()){
	if ( (d->PdgCode() == 22) && (d->Energy() > _eCut) )
	  _n_gammas += 1;
	else if ( (abs(d->PdgCode()) == 11) && (d->Energy() > _eCut) )
	  _n_electrons += 1;
	else if ( (d->PdgCode() == 111) && (d->Energy() > _eCut) )
	  _n_pi0 += 1;
	else if ( (d->PdgCode() == 211) && (d->Energy() > _eCut) )
	  _n_piplus += 1;
	else if ( (d->PdgCode() == 2112) && (d->Energy() > _eCut) ){
	  _n_neutrons += 1;
	  // Add up neutral particles' energies
	  _e_neutrals += d->KineticEnergy();
	}
	else if ( (d->PdgCode() == 2212) && (d->Energy() > _eCut) )
	  _n_protons += 1;
	else if (found_parent_nucleus &&  d->PdgCode() == 1000180400 )
	  _e_nucleus_diff = d->KineticEnergy();
	else if ( d->PdgCode() == 1000180400 )
	  found_parent_nucleus = true;
      }
    }
    
    // find the number of tracks that start within 1 cm of the neutrino interaction
    _n_tracksInt = 0;
    geoalgo::Point_t nu_vtx(_x_nu,_y_nu,_z_nu);
    for (auto &part : mc_ps){
      if (abs(part.PdgCode()) == 13 || abs(part.PdgCode()) == 211 || abs(part.PdgCode()) == 2212 ){
	if ( nu_vtx.Dist(part.Vertex()) < 1){
	  _n_tracksInt += 1;
	  _e_trkInt += part.KineticEnergy();
	}
      }
      for (auto &nud : part.Daughters()){
	if (abs(nud.PdgCode()) == 13 || abs(nud.PdgCode()) == 211 || abs(nud.PdgCode()) == 2212 ){
	  if ( nu_vtx.Dist(nud.Vertex()) < 1){
	    _n_tracksInt += 1;
	    _e_trkInt += nud.KineticEnergy();
	  }
	}
      }
    }
    
    // Count number of tracks and showers with E > _eCut MeV
    _n_showersReco = 0;
    _n_tracksReco  = 0;
    for (auto &s : data.Shower())
      if (s->_energy > _eCut) { _n_showersReco += 1; }
    _n_tracksReco = data.Track().size();


    // size of ParticleSet should be the number of neutrinos found, each associated with a single electron
    _n_singleReco = ps.size();

    // if only 1 CCSingleE interaction was found -> misID = 0
    if ( _n_singleReco == 1){
      _misID = 0;
      _singleE_ctr += 1;
    }

    // If debug -> print out RECO particle set
    if (_debug){
      std::cout << "Reco Particle Tree: " << std::endl;
      for (auto &p : ps)
	std::cout << p.Diagram();
    }

    // If no single electrons reconstructed -> fill tree anyway with misID info
    if ( _n_singleReco == 0 )
      _result_tree->Fill();
    
    for(size_t i = 0; i< ps.size(); i++){
      Particle neutrino = ps[i];

      if(abs(neutrino.PdgCode()) != 12  && abs(neutrino.PdgCode()) != 14)
	std::cout<<"wtf neutrino doesn't have a neutrino pdg code"<<std::endl;
      
      
      _x_nuReco = neutrino.Vertex()[0];
      _y_nuReco = neutrino.Vertex()[1];
      _z_nuReco = neutrino.Vertex()[2];
      _px_nuReco = neutrino.Momentum()[0];
      _py_nuReco = neutrino.Momentum()[1];
      _pz_nuReco = neutrino.Momentum()[2];
      _n_tracksIntReco = ps[i].Daughters().size()-1;
      
      double momMag = 0;
      
      _e_trkIntReco = 0;
      _e_nuReco = 0;
      //find the neutrino daughter that is a lepton
      for (auto const& daught : ps[i].Daughters()){
	_e_nuReco += daught.KineticEnergy();
	
	// if not a lepton, add energy to tracks
	if (abs(daught.PdgCode()) != 11){
	  _e_trkIntReco += daught.KineticEnergy();
	}
	
	if(abs(daught.PdgCode()) == 11 || abs(daught.PdgCode()) == 13){
	  _e_lepReco = daught.Energy();
	  
	  //length of shower (geoalgo cone) associated with the electron
	  //_showerlength_lepReco = data.AllShower().at(daught.RecoObjID()).Length(); //kaleko
	  _x_lepReco = daught.Vertex()[0];
	  _y_lepReco = daught.Vertex()[1];
	  _z_lepReco = daught.Vertex()[2];
	  _px_lepReco = daught.Momentum()[0];
	  _py_lepReco = daught.Momentum()[1];
	  _pz_lepReco = daught.Momentum()[2];
	  _theta_lepReco = (180./3.14) * acos( _pz_lepReco / sqrt( _px_lepReco*_px_lepReco + _py_lepReco*_py_lepReco + _pz_lepReco*_pz_lepReco ) );
	  _phi_lepReco   = (180./3.14) * asin( _py_lepReco / sqrt( _px_lepReco*_px_lepReco + _py_lepReco*_py_lepReco ) );
	  _lep_vtxdist = sqrt( (_x_lep-_x_lepReco)*(_x_lep-_x_lepReco) +
			       (_y_lep-_y_lepReco)*(_y_lep-_y_lepReco) + 
			       (_z_lep-_z_lepReco)*(_z_lep-_z_lepReco) );
	  _lep_dot = ( ( _px_lep*_px_lepReco + _py_lep*_py_lepReco + _pz_lep*_pz_lepReco ) / 
		       ( sqrt( _px_lepReco*_px_lepReco + _py_lepReco*_py_lepReco + _pz_lepReco*_pz_lepReco ) * 
			 sqrt( _px_lep*_px_lep + _py_lep*_py_lep + _pz_lep*_pz_lep ) ) );
	  
	  ::geoalgo::HalfLine shr(daught.Vertex(),daught.Momentum());
	  
	  double detHalfHeight = 116.5 ;
	  _distToTopWall = (_y_lepReco - detHalfHeight)*daught.Momentum().Length()/_py_lepReco ;
	  
	  _distToWall = sqrt(_geoAlgo.SqDist(daught.Vertex(),fTPC));
	  if(_geoAlgo.Intersection(fTPC,shr,true).size() > 0)
	    _distBackAlongTraj = sqrt(daught.Vertex().SqDist(_geoAlgo.Intersection(fTPC,shr,true)[0])) ;
	  else
	    _distBackAlongTraj = -999; 
	  
	  momMag = sqrt(_px_lepReco*_px_lepReco + _py_lepReco *_py_lepReco + _pz_lepReco*_pz_lepReco);
	  _px_lepNormReco = _px_lepReco / momMag ;
	  _py_lepNormReco = _py_lepReco / momMag ;
	  _pz_lepNormReco = _pz_lepReco / momMag ;
	  
	  double py = _py_lepNormReco ;
	  double pz = _pz_lepNormReco ;
	  double convert = 180.0/ 3.1415926525898 ; 
	  double quad = py/pz  ;
	  if(quad < 0)
	    quad *=-1; 
	  
	  _angle_Norm = atan(quad );
	  _angle_Norm*= convert ;
	  
	  if(py >=0 && pz <0)
	    _angle_Norm = 180 - _angle_Norm ; 
	  else if(py <0 && pz <0)
	    _angle_Norm = 180 + _angle_Norm ;
	  else if(py <0 && pz >=0)
	    _angle_Norm = 360 - _angle_Norm ;
	  
	}// if particle is lepton
      }// for all daughters

      _result_tree->Fill();
    }// loop over all CCSingleEs found in event
    
    _h_e_nu_correlation->Fill(_e_nu,_e_nuReco);
    
    if (_debug){
      std::cout << "Ana results:" << std::endl
		<< "Mis-ID                 : " << _misID << std::endl           
		<< "Neutrino E  [Mc,Reco]  : [" << _e_nu << ", " << _e_nuReco << "]" <<  std::endl
		<< "Lepton E  [Mc,Reco]    : [" << _e_lep << ", " << _e_lepReco << "]" <<  std::endl
		<< "Neutrals E  [Mc,Reco]  : [" << _e_neutrals << "]" <<  std::endl
		<< "Nucl dE  [Mc,Reco]     : [" << _e_nucleus_diff << "]" <<  std::endl
		<< "Lepton Vtx dist Mc-Reco:  " << sqrt( (_x_lep-_x_lepReco)*(_x_lep-_x_lepReco) +
							 (_y_lep-_y_lepReco)*(_y_lep-_y_lepReco) +
							 (_z_lep-_z_lepReco)*(_z_lep-_z_lepReco) ) << std::endl
		<< "Lepton theta [Mc,Reco] : [" << _theta_lep << ", " << _theta_lepReco << "]" <<  std::endl
		<< "Lepton phi [Mc,Reco]   : [" << _phi_lep << ", " << _phi_lepReco << "]" <<  std::endl << std::endl;
    }
    
    return true;
}
  
  void ERAnaSingleE::ProcessEnd(TFile* fout)
  {
    
    _eff = 100*_singleE_ctr/float(_numEvts);
    
    std::cout << "RESULTS: " << std::endl
	      << "Tot Events    : " << _numEvts << std::endl
	      << "SingleE Events: " << _singleE_ctr << std::endl
	      << "Eff           : " << _eff << " %" << std::endl;

    MakeEffPlot("e_lep",10,0,3000);
    MakeEffPlot("e_nu",10,0,3000);
    MakeEffPlot("n_tracks",10,-0.5,9.5);
    MakeEffPlot("n_tracksReco",10,-0.5,9.5);

    if (fout){
      fout->cd();
      _result_tree->Write();
      _h_e_nu_correlation->Write();
    }

    return;
  }


  void ERAnaSingleE::MakeEffPlot(std::string varname,
				 int nbins, double xmin, double xmax){

    // Efficiency vs. variable "varname"
    int Nall, Nok;
    TH1D *hist = new TH1D(Form("_hEffvs%s",varname.c_str()),Form("Efficiency vs %s",varname.c_str()),nbins,xmin,xmax);
    TH1D *All = new TH1D("All","All",nbins,xmin,xmax); // Histogram of all entries as a function of Elep
    TH1D *Ok = new TH1D("Ok","Ok",nbins,xmin,xmax);  // Histogram of all entries that are not mis-ID vs Elep
    Nall = _result_tree->Draw(Form("%s>>All",varname.c_str()),"");
    Nok = _result_tree->Draw(Form("%s>>Ok",varname.c_str()),"misID==0");
    for (int n=0; n < nbins; n++){
      if (All->GetBinContent(n+1) > 0){
	double eff = Ok->GetBinContent(n+1)/All->GetBinContent(n+1);
	hist->SetBinContent(n+1, eff);
	hist->SetBinError(n+1, sqrt( eff*(1-eff) / All->GetBinContent(n+1) ) );
      }
      else{
	hist->SetBinContent(n+1,0);
	hist->SetBinError(n+1,0.);
      }
    }
    delete All;
    delete Ok;
    hist->Write();

    return;
  }

  void ERAnaSingleE::ResetTreeVariables(){
    
    _misID = 1;

    _n_singleReco  = -1;
    _n_electrons   = -1;
    _n_gammas      = -1;
    _n_showers     = -1;
    _n_showersReco = -1;
    _n_tracks      = -1;
    _n_tracksReco  = -1;
    _n_tracksInt   = -1;
    _n_tracksIntReco = -1;
    _n_protons     = -1;
    _n_neutrons    = -1;
    _n_piplus      = -1;
    _n_pi0         = -1;

    _e_nu          = -1000;
    _e_nuReco      = -1000;
    _x_nu         = -1000;
    _y_nu         = -1000;
    _z_nu         = -1000;
    _x_nuReco     = -1000;
    _y_nuReco     = -1000;
    _z_nuReco     = -1000;
    _px_nu         = -1000;
    _py_nu         = -1000;
    _pz_nu         = -1000;
    _px_nuReco     = -1000;
    _py_nuReco     = -1000;
    _pz_nuReco     = -1000;
    _pdg_nu        = -1;
    _e_lep         = -1000;
    _x_lep         = -1000;
    _y_lep         = -1000;
    _z_lep         = -1000;
    _pdg_lep       = -1;
    _theta_lep     = -360;
    _phi_lep       = -360;
    _e_lepReco     = -1000;
    _showerlength_lepReco     = -1000;
    _x_lepReco     = -1000;
    _y_lepReco     = -1000;
    _z_lepReco     = -1000;
    _theta_lepReco = -360;
    _phi_lepReco   = -360;
    _lep_dot       = -2;
    _lep_vtxdist   = -1000;
    _distToTopWall = -9999;

    _e_trkInt = -1;
    _e_trkIntReco = -1;

    return;
  }

  }

#endif
