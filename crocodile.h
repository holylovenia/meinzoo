// File: crocodile.h

#ifndef CROCODILE_H
#define CROCODILE_H

#include "reptilia.h"
#include "carnivora.h"
#include "behavior_tame.h"

class Crocodile : public Reptilia, public Carnivora, public BehaviorTame {
	public:
		Crocodile(int _weight);
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif