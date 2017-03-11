#ifndef GIRAFFE_H
#define GIRAFFE_H

#include "mammalia.h"
#include "herbivora.h"
#include "behavior_tame.h"

class Giraffe: public Mammalia, public Herbivora, public BehaviorTame
{
	public:
		Giraffe(int _weight);
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif