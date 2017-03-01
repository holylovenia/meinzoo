#ifndef AIR_HABITAT_H
#define AIR_HABITAT_H

#include "habitat.h"

class AirHabitat : public Habitat {
	public:
		// ctor
		AirHabitat();
		// ctor with parameter
		AirHabitat(char type);
		// cctor
		AirHabitat(const AirHabitat& AH);
		// operator=
		AirHabitat& operator=(AirHabitat& AH);
		// dtor
		~AirHabitat();
		
	private:
		char type = 'A';
}

#endif