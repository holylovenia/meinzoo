#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "mammalia.h"
#include "herbivora.h"
#include "behavior_tame.h"

class Elephant: public Mammalia, public Herbivora, public BehaviorTame
{
	public:
		Elephant(int _weight);
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif