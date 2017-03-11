#include "tiger.h"

Tiger::Tiger(int _weight) : defID(3), defRatioMeat(50), defRatioPlant(0)
{
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

Tiger::Tiger(const Tiger& W) : defID(3), defRatioMeat(50), defRatioPlant(0)
{
	ID = defID;
	ratioMeat = W.ratioMeat;
	ratioPlant = W.ratioPlant;
	isLandAnimal = W.isLandAnimal;
	isWaterAnimal = W.isWaterAnimal;
	isAirAnimal = W.isAirAnimal;
	weight = W.weight;
}

void Tiger::Interact()
{
	std::cout << "The tiger is eating meat" << std::endl;
}