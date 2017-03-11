#include "colibri.h"

Colibri::Colibri(int _weight) : defID(19)
{
	ID = defID;
	ratioMeat = 1;
	ratioPlant = 0;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = true;
	weight = _weight;
}

void Colibri::Interact()
{
	std::cout << "The colibri is staring at you" << std::endl;
}