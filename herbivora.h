#ifndef HERBIVORA_H
#define HERBIVORA_H

#include "animal_diet.h"

class Herbivora: public AnimalDiet {
	public:
		// ctor
		Herbivora();
		// cctor
		Herbivora(Herbivora& H);
		// operator=
		Herbivora& operator=(Herbivora& H);
		// dtor
		~Herbivora();

	protected:
		bool eatMeat = false;
		bool eatPlants = true;
}

#endif