#ifndef ERTOOL_ALGOSINGLEE_CXX
#define ERTOOL_ALGOSINGLEE_CXX

#include "AlgoSingleE.h"

namespace ertool {

  size_t single_e_counter = 0;
  size_t total_e_showers = 0;
  size_t total_g_showers = 0;
  size_t nonzero_dedx_counter = 0;
  
  AlgoSingleE::AlgoSingleE() : AlgoBase()
			     , _alg_tree(nullptr)
			     , fTPC(-10.,-126.,-10.,292.,136.,1150.)
  {

    _name       = "AlgoSingleE";
    _e_mass     = TDatabasePDG().GetParticle(11)->Mass();
    _e_ll_values = 0;
    _dedx_values = 0;
    _Ethreshold = 0;
    _verbose = false;
    _useRadLength = false;
    _hassister = false;
    _rejectLongTracks = true;
    _vtxProximityCut = 0;
    _BDtW = 0; 
    _BDtTW = 0;

  }

  void AlgoSingleE::Reset()
  {
    std::cout<<__FUNCTION__<<" found "<<single_e_counter<<" events with a single electron in it."<<std::endl;
    std::cout<<"and "<<nonzero_dedx_counter<<" nonzero dedx showers"<<std::endl;
    std::cout<<"Found "<<total_e_showers<<" total e showers"<<std::endl;
    std::cout<<"Found "<<total_g_showers<<" total g showers"<<std::endl;
  }
  
  void AlgoSingleE::ProcessBegin()
  {

    _alg_emp.LoadParams();
    _alg_emp.ProcessBegin();
    _alg_emp.SetMode(true);

    if(!_e_ll_values)
      _e_ll_values = new TH1F("e_ll_values","e_ll_values",1000,-1,0);

    if(!_dedx_values)
      _dedx_values = new TH1F("dedx_values","dedx_values",1000,0,8);
    
    if (_alg_tree) { delete _alg_tree; }
    _alg_tree = new TTree("_alg_tree","Algo SingleE Tree");
    _alg_tree->Branch("_E",&_E,"_E/D");
    _alg_tree->Branch("_PDG",&_PDG,"PDG/I");
    _alg_tree->Branch("_VsTrack",&_VsTrack,"_VsTrack/I");
    _alg_tree->Branch("_thatE",&_thatE,"thatE/D");
    _alg_tree->Branch("_dEdx",&_dEdx,"_dEdx/D");
    _alg_tree->Branch("_IP",&_IP,"_IP/D");
    _alg_tree->Branch("_IPthisStart",&_IPthisStart,"_IPthisStart/D");
    _alg_tree->Branch("_IPthatStart",&_IPthatStart,"_IPthatStart/D");
    _alg_tree->Branch("_IPtrkBody",&_IPtrkBody,"_IPtrkBody/D");
    _alg_tree->Branch("_distBackAlongTraj",&_distBackAlongTraj,"_distBackAlongTraj/D");
    _alg_tree->Branch("_distToTopWall",&_distToTopWall,"_distToTopWall/D");
    
    return;
  }

  void AlgoSingleE::LoadParams(std::string fname, size_t version){
    
    // Load EMPart params
    _alg_emp.LoadParams(fname,version);
    
    return;
  }

  ParticleSet AlgoSingleE::Reconstruct(const EventData &data){
    
    // ParticleSet where to store single electrons
    ParticleSet res;

    //res = emParticles;

    // Reconstruct Track Hierarchy
    ParticleSet trackHierarchy;
    trackHierarchy = _findRel.FindTrackHierarchy(data.Track());

    // Find Primaries
    ParticleSet primaries;
    primaries = _primaryFinder.Reconstruct(data);

    if (_verbose) { 
      std::cout << "*********** BEGIN SingleE RECONSTRUCTION ************" << std::endl;
      std::cout << "Showers in event  : " << data.Shower().size() << std::endl;
    }

    // We have a list of primaries.
    // Filter them to select single e- showers


    // FIND PRIMARY
    for (size_t pr=0; pr < primaries.size(); pr++){

      // get the associated RecoObject (only care about showers)
      if (primaries[pr].Type() != Particle::RecoObjType_t::kShower)
	continue;

      // get primary shower
      auto const& thisShower = data.Shower(primaries[pr].RecoObjID());
      // keep track of whether it is single
      bool single = true;
      // if we find that this shower shares a vertex with a track -> change "_hassister" to true.
      _hassister = false;
      // Keep track of list of siblings found for the shower (will be used to reconstruct full neutrino interaction)
      std::vector<int> siblings;

      if (_verbose) { std::cout << "This shower: (" << primaries[pr].RecoObjID() << ")" << "\tE: " << thisShower._energy << std::endl; }

      // it is primary. Make sure it satisfies SingleE conditions also
      // 1) loop over all showers in event
      for (size_t s=0; s < data.Shower().size(); s++){
	auto const& thatShower(data.Shower(s));
	geoalgo::Point_t vtx(3);
	// make sure we don't use "thisShower" in the loop
	if (thatShower.ID() == thisShower.ID()) 
	  continue;
	if (_verbose) { std::cout << "Comparing with shower (" << s << ")" << std::endl; }
	// is "thatshower" gamma or e-like?
	// if gamma-like maybe a nearby pi0 -> ok if close
	if (isGammaLike(thatShower._dedx,-1))
	  continue;
	// "thatShower" is e-like. If the two are correlated and siblings
	// then we have two e-like showers at the vertex -> do not count
	// "thisShower" as a SingleE
	// compare the two showers
	double IP = _findRel.FindClosestApproach(thisShower,thatShower,vtx);
	_VsTrack = 0;
	_thatE   = thatShower._energy;
	_IP = IP;
	_IPthisStart = vtx.Dist(thisShower.Start());
	_IPthatStart = vtx.Dist(thatShower.Start());
	_alg_tree->Fill();
	if (_verbose)
	  std::cout << "\tImpact Parameter      : " << _IP << std::endl
		    << "\tIP to other Shr Start : " << _IPthatStart << std::endl
		    << "\tIP to this Shr Start  : " << _IPthisStart << std::endl;
	if ( (IP < _maxIP) && ( vtx.Dist(thisShower.Start()) < _vtxToShrStartDist) && ( vtx.Dist(thatShower.Start()) < _vtxToShrStartDist) ){
	  single = false;
	  if (_verbose) { std::cout << "NOT single" << std::endl; }
	  break;
	}
      }// loop over all showers in event

      // if still single go over tracks. Find potential siblings
      if (!single)
	continue;

      for (size_t t=0; t < data.Track().size(); t++){
	auto const& thatTrack(data.Track(t));
	// make sure track has more than 2 points. Otherwise GeoAlgo will get mad!
	// this is already enforced if TrackLength ERTool::Filter is used with a value
	// greater than 0
	if (thatTrack.size() < 2)
	  continue;
	if (_verbose) { std::cout << "Comparing with track (" << t << ")" << std::endl; }
	geoalgo::Point_t vtx(3);
	// compare the two tracks
	double IP =  _findRel.FindClosestApproach(thisShower,thatTrack,vtx);
	_VsTrack = 1;
	_thatE   = thatTrack._energy;
	_IP = IP;
	_IPthisStart = vtx.Dist(thisShower.Start());
	_IPthatStart = vtx.Dist(thatTrack.front());
	_IPtrkBody = sqrt(_geoAlgo.SqDist(vtx,thatTrack));
	_alg_tree->Fill();
	if (_verbose)
	std::cout << "\tImpact Parameter: " << _IP << std::endl
		  << "\tIP to Trk Start : " << _IPthatStart << std::endl
		  << "\tIP to Trk Body  : " << _IPtrkBody << std::endl
		  << "\tIP to Shr Start : " << _IPthisStart << std::endl;
	single = true;
	if ( (IP < _maxIP)                                              // good correlation
	     && (vtx.Dist(thatTrack.front()) < _vtxToTrkStartDist)      // vertex close to track start
	     && (vtx.Dist(thisShower.Start()) < _vtxToShrStartDist) )   // vertex not unreasonably far from shower start
	  {
	    // our shower has a common origin with this track
	    // they are siblings
	    if (_verbose) { std::cout << "common origin w/ track!" << std::endl; }
	    _hassister = true;
	    siblings.push_back(t);
	    
	    if (isGammaLike(thisShower._dedx,vtx.Dist(thisShower.Start()))){
	      if (_verbose) { std::cout << "Shower is gamma-like. Ignore " << std::endl; }
	      single = false;
	      break;
	    }
	    else{
		single = true;
	    }
	    
	  }// if common origin with primary!
      }// for all tracks

      // If single and there are "track-candidate-vertices" formed by 2 or more tracks
      // compare shower start distance to these vertices.
      // if more than some threshold not single
      double distmin = 1036;
      for (size_t v = 0; v < trackHierarchy.size(); v++){
	if (trackHierarchy[v].Daughters().size() > 1){
	  // more than one tracks for this vertex. -> reliable!
	  double thisdist = thisShower.Start().Dist(trackHierarchy[v].Vertex());
	  if ( thisdist < distmin)
	    distmin = thisdist;
	}
      }

      if ( single and !_hassister and (_vtxProximityCut != 0) ){
	if ( (distmin != 1036) and (distmin > _vtxProximityCut) ){
	  if(_verbose) { std::cout << "Trk-Vtx found @ distance of " << distmin << ". Shower not single!" << std::endl; }
	  single = false;
	}
      }
      
      // if still single (and no sister track) look at
      // dEdx to determine if e-like
      if (single && !_hassister){
	if ( isGammaLike(thisShower._dedx,-1) || (thisShower._dedx <= 0) || (thisShower._dedx > 10.) ){
	  if (_verbose) { std::cout << "Shower is single but gamma-like -> reject" << std::endl; }
	  single = false;
	}
      }

      //If single still true -> we found it! Proceed!
      // the particle with all it's info was already
      // created, simply add it to the result vector
      if (single){
	if (_verbose) { std::cout << "Shower is Single!" << std::endl; }
	// Create an "neutrino" particle that gave
	// birth to this electron shower
	Particle neutrino(12,0);
	neutrino.Vertex(thisShower.Start());
	//neutrino.Momentum(thisShower.Dir()*mom);

	// momentum to be decided later (after summing momenta from all daughters)
	geoalgo::Vector_t neutrinoMomentum(0.,0.,0.);
	double neutrinoKineticEnergy = 0;
	// Create electron!
	Particle electron(11,_e_mass);
	electron.Vertex(thisShower.Start());
	double mom = sqrt( (thisShower._energy)*(thisShower._energy) - (_e_mass*_e_mass) );
	if (mom < 0) { mom = 1; }
	electron.Momentum(thisShower.Dir()*mom);
	neutrinoKineticEnergy += thisShower._energy;
	neutrinoMomentum += electron.Momentum();
	electron.RecoObjInfo(primaries[pr].RecoObjID(),Particle::RecoObjType_t::kShower);
	neutrino.AddDaughter(electron);
	// if the shower has siblings associated with it
	if (_hassister){
	  // loop over siblings found
	  for (auto &sibling : siblings){
	    auto const& sibTrack(data.Track(sibling));
	    Particle sib = _findRel.GetPDG(sibTrack);
	    sib.Vertex(sibTrack[0]);
	    //sib.Mass() is in GEV, sibTrack._energy is in MEV
	    //I think sibTrack._energy already has mass taken out of it.
	    double Edep = sibTrack._energy;
	    if (Edep < 0) { Edep = 0.; }
	    geoalgo::Vector_t sibUnitDir = (sibTrack[1]-sibTrack[0]);
	    sibUnitDir /= sibUnitDir.Length();
	    sib.Momentum(sibUnitDir*( sqrt(Edep*(Edep+2*sib.Mass())) ));
	    neutrinoMomentum += sib.Momentum();
	    neutrinoKineticEnergy += sibTrack._energy;
	    sib.RecoObjInfo(sibling,Particle::RecoObjType_t::kTrack);
	    neutrino.AddDaughter(sib);
	  }// for all sibling tracks
	}// if hassister
	// get neutrino momentum direction
	neutrinoMomentum.Normalize();
	neutrino.Momentum(neutrinoMomentum*neutrinoKineticEnergy);

	//Only store the neutrino if lepton is in active volume!
	if(fTPC.Contain(neutrino.Vertex())){
	  res.push_back(neutrino);
	}
      }// if single
      // if not single
      else
	if (_verbose) { std::cout << "Shower is not single." << std::endl; }


      
    }// for all primaries found / for all showers
    
    return res;
  }
  
  void AlgoSingleE::ProcessEnd(TFile* fout){
    
    if(fout){
      fout->cd();
      
      if(_e_ll_values)
	_e_ll_values->Write();

      if(_dedx_values)
	_dedx_values->Write();

      if (_alg_tree)
	_alg_tree->Write();
    }

    return;
  }

  
  bool AlgoSingleE::filterMuons(const EventData &data, const std::vector<int> &secondaryTracks){

    for(size_t t=0; t < data.Track().size(); t++){

      auto it = std::find(secondaryTracks.begin(), secondaryTracks.end(), t );
      if ( it == secondaryTracks.end() ){      
	// then it's a primary
	// check track length
	double len = data.Track().at(t)->Length();
	if (len > 100.)
	  return true;
      }
    }
    
    return false;
  }


  bool AlgoSingleE::isGammaLike(const double dedx, double radlen, bool forceRadLen)
  {
    if ( !_useRadLength && !forceRadLen )
      radlen = -1;
    if ( _alg_emp.LL(true, dedx, radlen) < _alg_emp.LL(false, dedx, radlen) )
      {
	if (_verbose) {
	  std::cout << "Shower has dEdx = " << dedx
		    << "\tRadLen = " << radlen
		    << "\tIgnore for comparison." << std::endl;
	}
	return true;
      }
    
    return false;
  }



  void AlgoSingleE::ClearTree(){

    _E = -1;
    _PDG = -1;
    _VsTrack = -1;
    _thatE = -1;
    _dEdx = -1;
    _IP = -1;
    _IPthisStart = -1;
    _IPthatStart = -1;
    _IPtrkBody = -1;
    _distBackAlongTraj = -1;
    _distToTopWall  = -999999;

    return;
  }


}

#endif
