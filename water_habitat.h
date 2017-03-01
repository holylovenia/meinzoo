#ifndef WATER_HABITAT_H
#define WATER_HABITAT_H

#include "habitat.h"

class WaterHabitat : public Habitat {
	public:
		// ctor
		WaterHabitat();
		// ctor with parameter
		WaterHabitat(char type);
		// cctor
		WaterHabitat(const WaterHabitat& WH);
		// operator=
		WaterHabitat& operator=(WaterHabitat& WH);
		// dtor
		~WaterHabitat();
		
	private:
		char type = 'W';
}

#endif