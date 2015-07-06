/**
 * \file EMShowerProfile.h
 *
 * \ingroup SignalSelection
 * 
 * \brief Class def header for a class EMShowerProfile
 *
 * @author davidkaleko
 */

/** \addtogroup SignalSelection

    @{*/
#ifndef BASICTOOL_EMSHOWERPROFILE_H
#define BASICTOOL_EMSHOWERPROFILE_H

#include <iostream>

/**
   \class EMShowerProfile
   This class calculates parameters for 3D EM shower geometrical profile
 */
class EMShowerProfile{

public:

  /// Default constructor
  EMShowerProfile(){};

  /// Default destructor
  virtual ~EMShowerProfile(){};

  /// Given shower energy [MeV], returns the length of this shower
  double Length(const double energy) const;

  /// Given the distance [cm] from the shower start along the trunk, calculate energy containment
  double EnergyContainment(const double dist) const;

  /// Given shower energy find opening angle
  /// This is done with simple arctangent and calculation of shower length
  double OpeningAngle(const double energy) const;

  /// Given (nothing) return shower radius
  /// Shower radius doesn't depend on energy (see: Moliere radius on google)
  double ShowerRadius() const;

};

#endif
/** @} */ // end of doxygen group 

