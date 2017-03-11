#ifndef CARNIVORA_H
#define CARNIVORA_H

#include "animal_diet.h"

class Carnivora: public AnimalDiet {
	public:
		// ctor
		Carnivora();

	protected:
		bool eatMeat;
		bool eatPlants;

	private:
		const bool defEatMeat;
		const bool defEatPlants;
};

#endif