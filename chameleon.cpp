// File: chameleon.cpp

#include "chameleon.h"

Chameleon::Chameleon(int _weight) : defID(10), defRatioMeat(20), defRatioPlant(50) {
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

void Chameleon::Interact() {
	std::cout << "The komodo is looking at you intensely" << std::endl;
}