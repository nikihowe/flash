/**
 * \file AlgoSingleGamma.h
 *
 * \ingroup Algo
 * 
 * \brief Class def header for a class AlgoSingleGamma
 *
 * @author jzennamo
 */

/** \addtogroup Algo

    @{*/

#ifndef ERTOOL_ALGOSINGLEGAMMA_H
#define ERTOOL_ALGOSINGLEGAMMA_H

#include "ERTool/Algo/AlgoEMPart.h"
#include "ERTool/Algo/AlgoFindRelationship.h"
#include "ERTool/Base/AlgoBase.h"
#include "GeoAlgo/GeoAlgo.h"
#include "GeoAlgo/GeoAABox.h"
#include <algorithm> // for std::find
#include <utility>

namespace ertool {

  /**
     \class AlgoSingleGamma
     User custom Algorithm class made by kazuhiro
   */
  class AlgoSingleGamma : public AlgoBase {
  
  public:

    /// Default constructor
    AlgoSingleGamma();

    /// Default destructor
    virtual ~AlgoSingleGamma(){};

    /// Reset function
    virtual void Reset();

    virtual void ProcessBegin();

    virtual void ProcessEnd(TFile* fout);

    /// Override the ertool::SPTBase::LoadParams function
    virtual void LoadParams(std::string fname="",size_t version=kINVALID_SIZE);

    /// Function to evaluate input showers and determine a score
    virtual ParticleSet Reconstruct(const EventData &data);

		// Set verbosity
    void setVerbose(bool on) { _verbose = on; _findRel.setDebug(on); }

       /// Use EMPart
    void useRadLength(bool on) { _useRadLength = on; }

    void setRejectLongTracks(bool on) { _rejectLongTracks = on; }

    void setVtxToTrkStartDist(double d){
      _vtxToTrkStartDist = d;
    }
    void setVtxToTrkDist(double d){
      _vtxToTrkDist = d;
    }
    void setVtxToShrStartDist(double d){
      _vtxToShrStartDist = d;
    }
    void setMaxIP(double d){
      _maxIP = d;
    }
    void setEThreshold(double E){ _Ethreshold = E; }

    void setVtxProximityCut(double d) { _vtxProximityCut = d; }
    void setBDtW(double b) { _BDtW = b; }
    void setBDtTW(double bt) { _BDtTW = bt; }



  private:

    ::geoalgo::AABox fTPC;

    /// clear tree
    void ClearTree();

  protected:

        /// Function to check wether a shower is e- or gamma-like
    /// Returns true if gamma-like
    bool isGammaLike(const double dedx, double radlen,bool forceRadLen=false);

    // verbose flag
    bool _verbose;
    // electron mass
    double _e_mass;
    // flag to decide whether to use EMPart or not
    // if True -> use radiation length to calculate LL
    // if False -> use only dEdx
    bool _useRadLength;

    // Energy thershold. If shower has < _Ethreshold -> don't consider
    double _Ethreshold;

    // Reject events with long primary tracks
    bool _rejectLongTracks;

    // constants to be used for decision-making
    // minimum distance that a reco-vertex must be away from the
    // start of a track for the vtx to be considered "on the track"
    // and the shower to come from the track, instead of the shower
    // and track being siblings.
    double _vtxToTrkStartDist;
    // maximum distance from the entire track for the reco-vertex
    // for the vertex to be considered on the track and the shower
    // to be considered as coming from the track
    double _vtxToTrkDist;
    // Max distance from shower start that the vertex can be
    // this value should be a few radiation lengths: the cut 
    // is placed to remove cases where the shower is meters
    // away from the vertex. Probably an accidental correlation
    double _vtxToShrStartDist;
    double _vtxToElecShrStartDist;
    double _vtxToGammShrStartDist;
    // Maximum impact parameter allowed between the two objects
    // if larger it means that the two lines/segments do not come
    // within this value at any point and they therefore are 
    // assumed to not be correlated
    double _maxIP;
    // Vertex Proximity Cut:
    // if "candidate vertices" from the tracks are found
    // (needs to be a vertex in common to 2+ tracks in event)
    // require that a shower be within this distance to the
    // closest candidate vertex
    double _vtxProximityCut;
    // Backwards Distance to Wall Cut:
    // if "single" shower vertex is near to wall, it is likely due to
    // cosmic.  This becomes more important cut with small/no fid
    // volume cut. Default set off. 
    double _BDtW ;
    // Backwards Distance to Top Wall Cut:
    // if "single" shower vertex is extended backwards along its
    // trajectory, when does it hit the top wall of TPC (assuming
    // top wall is extended to infinity)? This param will be
    // negative for upwards facing showers.
    double _BDtTW ;

    // Keep track of whether a sister track to the shower has
    // been found
   bool _hassister;
   bool _track_assister;
   bool _elec_assister;
   bool _gam_assister;
   bool _vtx_assister;
   bool _muon_assister;
   
    // Other algorithms to use
    AlgoEMPart _alg_emp;
    AlgoFindRelationship _findRel;
    // GeoAlgo Tool
    ::geoalgo::GeoAlgo _geoAlgo;

    //debug histos
    TH1F* _e_ll_values;
    TH1F* _dedx_values;

    //Tree -> one entry per shower-other comparison
    // therefore possibly multiple entries for each shower
    TTree* _alg_tree;

    //For every Shower
    double _E; // energy of shower
    int    _PDG; // PDG code assigned by AlgoEMPart
    
   
    int    _VsTrack; // comparing vs track (==1)
    double _thatE; // Energy of other shower/track
    double _dEdx;
    double _IP; // Impact Paramter with other object
    double _IPthisStart; // distance from IP to this shower start point
    double _IPthatStart; // distance from IP to that shower/track start point
    double _IPtrkBody; // distance from IP to body of track (if comparing with track)
    double _distBackAlongTraj; // distance backwards from vertex to nearest wall
    double _distToTopWall; // distance backwards along traj from vertex to top wall(extended to infinity)
    
    //At the algo level what is tied to an event
    int _Ngamma; // Number of photons matched to an event 
    int _Ntrks; // Number of tracks matched to an event
    int _Nmu; // Number of muons matched to an event
    


  };
}
#endif

/** @} */ // end of doxygen group 
