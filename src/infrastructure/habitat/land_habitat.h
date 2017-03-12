#ifndef LAND_HABITAT_H
#define LAND_HABITAT_H

#include "habitat.h"

class LandHabitat: public Habitat {
	public:
		// ctor
		LandHabitat();
		
		virtual char render();

	private:
		const char defType;
};

#endif