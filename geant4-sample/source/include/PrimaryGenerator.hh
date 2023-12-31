//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// PrimaryGenerator.hh
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#ifndef PrimaryGenerator_h
#define PrimaryGenerator_h 1

#include "G4VUserPrimaryGeneratorAction.hh"
class G4Event;
class G4GeneralParticleSource;

//------------------------------------------------------------------------------
  class PrimaryGenerator : public G4VUserPrimaryGeneratorAction
//------------------------------------------------------------------------------
{
  public:
    PrimaryGenerator();
   ~PrimaryGenerator();

  public:
    void GeneratePrimaries(G4Event*);

  private:
    G4GeneralParticleSource* fpParticleGPS;
};
#endif
