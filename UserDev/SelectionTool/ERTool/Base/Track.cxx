#ifndef ERTOOL_TRACK_CXX
#define ERTOOL_TRACK_CXX

#include "Track.h"

namespace ertool {

  Track::Track() : RecoObjBase()
  { Reset(); }

  void Track::Reset()
  {
    Trajectory::clear();
    RecoObjBase::Reset();

    _pid_score.clear();
    for(size_t i = 0; i < kTrackPartIDMax; ++i)
      _pid_score.push_back(-1);
    //    for(auto& v : _pid_score) v = -1;
    _pid = Track::kUnknown;
    _energy = kINVALID_DOUBLE;
  }

}
#endif
