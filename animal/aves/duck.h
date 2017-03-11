#ifndef DUCK_H
#define DUCK_H

#include "aves.h"
#include "omnivora.h"
#include "behavior_tame.h"

class Duck : public Aves, public Omnivora, public BehaviorTame
{
	public :
		Duck(int _weight);
		void Interact();

	private:
		const int defID;
};

#endif