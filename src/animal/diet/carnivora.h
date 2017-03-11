#ifndef CARNIVORA_H
#define CARNIVORA_H

#include "animal_diet.h"

class Carnivora: public AnimalDiet {
	public:
		// ctor
		Carnivora();
		int getTotalMeat();
		int getTotalPlant();

	private:
		const bool defEatMeat;
		const bool defEatPlant;
};

#endif