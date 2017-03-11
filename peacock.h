#ifndef PEACOCK_H
#define PEACOCK_H

#include "aves.h"
#include "omnivora.h"
#include "behavior_tame.h"

class Peacock : public Aves, public Omnivora, public BehaviorTame
{
	public :
		Peacock(int _weight);
		void Interact();

	private:
		const int defID;
};

#endif