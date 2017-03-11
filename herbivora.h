#ifndef HERBIVORA_H
#define HERBIVORA_H

#include "animal_diet.h"

class Herbivora: public AnimalDiet {
	public:
		// ctor
		Herbivora();
		double getTotalMeat();
		double getTotalPlant();

	private:
		const bool defEatMeat;
		const bool defEatPlant;
};

#endif