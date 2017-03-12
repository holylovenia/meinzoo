#include "wild_colibri.h"

WildColibri::WildColibri(int _x, int _y, int _weight) : defID(21), defRatioMeat(0), defRatioPlant(60) {
	ID = defID;
	position.setX(_x);
	position.setY(_x);
	ratioMeat = defRatioMeat;
	ratioPlant = defRatioPlant;
	isLandAnimal = true;
	isWaterAnimal = false;
	isAirAnimal = true;
	weight = _weight;
	addEnemy(2); // lion
	addEnemy(3); // tiger
	addEnemy(9); // python
	addEnemy(19); // colibri
}

void WildColibri::Interact() {
	std::cout << "The wild colibri is going to skewer your eyes" << std::endl;
}