#include "elephant.h"

Elephant::Elephant(int _weight) : defID(3), defRatioMeat(0), defRatioPlant(80)
{
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

void Elephant::Interact()
{
	std::cout << "The giraffe is banging its head to a nearby tree" << std::endl;
}