// File: komodo.h

#ifndef KOMODO_H
#ifndef KOMODO_H

#include "reptilia.h"
#include "carnivora.h"
#include "behavior_tame.h"

class Komodo : public Reptilia, public Carnivora, public BehaviorTame {
	public:
		Komodo(int _weight);
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif