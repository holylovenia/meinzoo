#ifndef AIR_HABITAT_H
#define AIR_HABITAT_H

#include "habitat.h"

class AirHabitat : public Habitat {
	public:
		// ctor
		AirHabitat();
		
		virtual char render();
		
	private:
		const char defType;
};

#endif
