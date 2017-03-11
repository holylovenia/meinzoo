#include "wolf.h"

Wolf::Wolf(int _weight) : defID(1)
{
	ID = defID;
	ratioMeat = 50;
	ratioPlant = 0;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

Wolf::Wolf(const Wolf& W) : defID(1)
{
	ID = defID;
	ratioMeat = W.ratioMeat;
	ratioPlant = W.ratioPlant;
	isLandAnimal = W.isLandAnimal;
	isWaterAnimal = W.isWaterAnimal;
	isAirAnimal = W.isAirAnimal;
	weight = W.weight;
}

void Wolf::Interact()
{
	std::cout << "The wolf is howling" << std::endl;
}