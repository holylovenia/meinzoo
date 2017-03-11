#include "monkey.h"

Monkey::Monkey(int _weight) : defID(5), defRatioMeat(5), defRatioPlant(55)
{
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

void Monkey::Interact()
{
	std::cout << "The monkey is peeling a banana" << std::endl;
}