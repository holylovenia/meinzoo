#ifndef EAGLE_H
#define EAGLE_H

#include "aves.h"
#include "carnivora.h"
#include "behavior_tame.h"

class Eagle : public Aves, public Carnivora, public BehaviorTame
{
	public :
		Eagle(int _weight);
		void Interact();

	private:
		const int defID;
};

#endif