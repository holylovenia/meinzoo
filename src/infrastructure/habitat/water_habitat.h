#ifndef WATER_HABITAT_H
#define WATER_HABITAT_H

#include "habitat.h"

class WaterHabitat: public Habitat {
	public:
		// ctor
		WaterHabitat();
		
		virtual char render();

	private:
		const char defType;
};

#endif