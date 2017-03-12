#include "wolf.h"

Wolf::Wolf(int _x, int _y, int _weight) : defID(1), defRatioMeat(50), defRatioPlant(0) {
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

void Wolf::Interact() {
	std::cout << "The wolf is howling" << std::endl;
}