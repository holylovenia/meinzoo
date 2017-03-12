#include "zebra.h"

Zebra::Zebra(int _x, int _y, int _weight) : defID(4), defRatioMeat(0), defRatioPlant(45)
{
	ID = defID;
	position.setX(_x);
	position.setY(_x);
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
}

void Zebra::Interact()
{
	std::cout << "The zebra is running at the grass field" << std::endl;
}