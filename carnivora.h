#ifndef CARNIVORA_H
#define CARNIVORA_H

#include "animal_diet.h"

class Carnivora: public AnimalDiet {
	public:
		// ctor
		Carnivora();
		double getTotalMeat();
		double getTotalPlant();

	private:
		const bool defEatMeat;
		const bool defEatPlant;
};

#endif