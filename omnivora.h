#ifndef OMNIVORA_H
#define OMNIVORA_H

#include "animal_diet.h"

class Omnivora: public AnimalDiet {
	public:
		// ctor
		Omnivora();

	private:
		const bool defEatMeat;
		const bool defEatPlants;
};

#endif