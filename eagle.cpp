#include "eagle.h"

Eagle::Eagle(int _weight) : defID(18)
{
	ID = defID;
	ratioMeat = 30;
	ratioPlant = 0;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = true;
	weight = _weight;
}

void Eagle::Interact()
{
	std::cout << "The eagle is attacking you" << std::endl;
}