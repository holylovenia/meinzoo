#ifndef HERBIVORA_H
#define HERBIVORA_H

#include "animal_diet.h"

class Herbivora: public AnimalDiet {
	public:
		// ctor
		Herbivora();

	private:
		const bool defEatMeat;
		const bool defEatPlants;
};

#endif