#include "lion.h"

Lion::Lion(int _weight) : ID(2), ratioMeat(60), ratioPlant(0)
{
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

Lion::Lion(const Lion& W) : ID(2), ratioMeat(60), ratioPlant(0)
{
	isLandAnimal = W.isLandAnimal;
	isWaterAnimal = W.isWaterAnimal;
	isAirAnimal = W.isAirAnimal;
	weight = W.weight;
}

void Lion::Interact()
{
	std::cout << "The lion is roaring" << std::endl;
}