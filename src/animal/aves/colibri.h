#ifndef COLIBRI_H
#define COLIBRI_H

#include "aves.h"
#include "herbivora.h"
#include "behavior_tame.h"

class Colibri : public Aves, public Herbivora, public BehaviorTame
{
	public :
		Colibri(int _weight);
		void Interact();

	private:
		const int defID;
};

#endif