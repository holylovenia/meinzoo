#ifndef CARNIVORA_H
#define CARNIVORA_H

#include "animal_diet.h"

class Carnivora: public AnimalDiet {
	public:
		// ctor
		Carnivora();
		// cctor
		Carnivora(Carnivora& C);
		// operator=
		Carnivora& operator=(Carnivora& C);
		// dtor
		~Carnivora();

	protected:
		bool eatMeat = true;
		bool eatPlants = false;
}

#endif