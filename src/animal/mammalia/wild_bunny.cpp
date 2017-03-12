#include "wild_bunny.h"

WildBunny::WildBunny(int _x, int _y, int _weight) : defID(0), defRatioMeat(0), defRatioPlant(90) {
	ID = defID;
	position.setX(_x);
	position.setY(_x);
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = false;
	weight = _weight;
	for (int id = defID; id <= 21; id++) {
		addEnemy(id);
	}
}

void WildBunny::Interact() {
	std::cout << "The wild bunny is looking at you with murderous intent" << std::endl;
}