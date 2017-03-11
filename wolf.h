#ifndef WOLF_H
#define WOLF_H

#include "mammalia.h"
#include "carnivora.h"
#include "behavior_tame.h"

class Wolf: public Mammalia, public Carnivora, public BehaviorTame
{
	public:
		Wolf(int _weight);
		Wolf(const Wolf&);
		void Interact();

	private:
		const int defID;
};

#endif