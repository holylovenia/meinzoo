#ifndef OMNIVORA_H
#define OMNIVORA_H

#include "animal_diet.h"

class Omnivora: public AnimalDiet {
	public:
		// ctor
		Omnivora();
		int getTotalMeat();
		int getTotalPlant();

	private:
		const bool defEatMeat;
		const bool defEatPlant;
};

#endif