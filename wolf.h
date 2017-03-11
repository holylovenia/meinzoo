#include "mammalia.h"
#include "carnivora.h"
#include "behavior_tame.h"

#ifndef WOLF_H
#define WOLF_H

class Wolf : public Mammalia, public Carnivora, public BehaviorTame
{
	public :
		Wolf(int _weight);
		Wolf(const Wolf&);
		void interact();
};

#endif