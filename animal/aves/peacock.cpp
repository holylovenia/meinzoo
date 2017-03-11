#include "peacock.h"

Peacock::Peacock(int _weight) : defID(20)
{
	ID = defID;
	ratioMeat = 10;
	ratioPlant = 0;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

void Peacock::Interact()
{
	std::cout << "The peacock is eating worms" << std::endl;
}