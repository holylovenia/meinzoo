#ifndef LION_H
#define LION_H

#include "mammalia.h"
#include "carnivora.h"
#include "behavior_tame.h"

class Lion: public Mammalia, public Carnivora, public BehaviorTame
{
	public :
		Lion(int _weight);
		Lion(const Lion&);
		void Interact();
};

#endif