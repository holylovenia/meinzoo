#include "owl.h"

Owl::Owl(int _weight) : defID(17)
{
	ID = defID;
	ratioMeat = 10;
	ratioPlant = 0;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = true;
	weight = _weight;
}

void Owl::Interact()
{
	std::cout << "The owl is hooting" << std::endl;
}