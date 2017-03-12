#include "lion.h"

Lion::Lion(int _weight, int _x, int _y) : defID(2), defRatioMeat(60), defRatioPlant(0) {
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

void Lion::Interact() {
	std::cout << "The lion is roaring" << std::endl;
}