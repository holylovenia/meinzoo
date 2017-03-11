#include "duck.h"

Duck::Duck(int _weight) : defID(16)
{
	ID = defID;
	ratioMeat = 10;
	ratioPlant = 0;
	isLandAnimal = false;
	isWaterAnimal = true;
	isAirAnimal = true;
	weight = _weight;
}

void Duck::Interact()
{
	std::cout << "[EDIT]" << std::endl;
}