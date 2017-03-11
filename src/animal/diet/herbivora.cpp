#include "herbivora.h"

Herbivora::Herbivora(): defEatMeat(false), defEatPlant(true) {
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	totalReqPlant += getTotalPlant();
}

int Herbivora::getTotalMeat() {
	return 0;
}

int Herbivora::getTotalPlant() {
	return(ratioPlant * weight / 100);
}