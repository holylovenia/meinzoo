#ifndef OMNIVORA_H
#define OMNIVORA_H

#include "animal_diet.h"

class Omnivora: public AnimalDiet {
	public:
		// ctor
		Omnivora();
		// cctor
		Omnivora(Omnivora& O);
		// operator=
		Omnivora& operator=(Omnivora& O);
		// dtor
		~Omnivora();

	protected:
		bool eatMeat = true;
		bool eatPlants = true;
}

#endif