#include "monkey.h"

Monkey::Monkey(int _x, int _y, int _weight) : defID(5), defRatioMeat(10), defRatioPlant(40) {
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

void Monkey::Interact() {
	std::cout << "The monkey is peeling a banana" << std::endl;
}