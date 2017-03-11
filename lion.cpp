#include "lion.h"

Lion::Lion(int _weight) : defID(2), defRatioMeat(60), defRatioPlant(0)
{
	ID = defID;
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

Lion::Lion(const Lion& W) : defID(2), defRatioMeat(60), defRatioPlant(0)
{
	ID = defID;
	ratioMeat = W.ratioMeat;
	ratioPlant = W.ratioPlant;
	isLandAnimal = W.isLandAnimal;
	isWaterAnimal = W.isWaterAnimal;
	isAirAnimal = W.isAirAnimal;
	weight = W.weight;
}

void Lion::Interact()
{
	std::cout << "The lion is roaring" << std::endl;
}