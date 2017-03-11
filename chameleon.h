// File: chameleon.h

#ifndef CHAMELEON_H
#ifndef CHAMELEON_H

#include "reptilia.h"
#include "omnivora.h"
#include "behavior_tame.h"

class Chameleon : public Reptilia, public Omnivora, public BehaviorTame {
	public:
		Chameleon(int _weight);
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif