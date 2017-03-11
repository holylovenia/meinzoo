#ifndef WOLF_H
#define WOLF_H

#include "mammalia.h"
#include "carnivora.h"
#include "behavior_tame.h"

class Wolf: public Mammalia, public Carnivora, public BehaviorTame
{
	public:
		Wolf(int _weight);
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif