#include "wolf.h"

Wolf::Wolf(int _weight) : ID(1), ratioMeat(0.5), ratioPlant(0)
{
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

Wolf::Wolf(const Wolf& W) : ID(1), ratioMeat(0.5), ratioPlant(0)
{
	isLandAnimal = W.isLandAnimal;
	isWaterAnimal = W.isWaterAnimal;
	isAirAnimal = W.isAirAnimal;
	weight = W.weight;
}

void Wolf::interact()
{
	std::cout << "Howl" << std::endl;
}