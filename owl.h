#ifndef OWL_H
#define OWL_H

#include "aves.h"
#include "carnivora.h"
#include "behavior_tame.h"

class Owl : public Aves, public Carnivora, public BehaviorTame
{
	public :
		Owl(int _weight);
		void Interact();

	private:
		const int defID;
};

#endif