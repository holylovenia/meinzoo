#ifndef LAND_HABITAT_H
#define LAND_HABITAT_H

#include "habitat.h"

class LandHabitat : public Habitat {
	public:
		// ctor
		LandHabitat();
		// ctor with parameter
		LandHabitat(char type);
		// cctor
		LandHabitat(const LandHabitat& LH);
		// operator=
		LandHabitat& operator=(LandHabitat& LH);
		// dtor
		~LandHabitat();

	private:
		char type = 'L';
}

#endif