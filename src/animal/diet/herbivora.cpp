#include "herbivora.h"

Herbivora::Herbivora(): defEatMeat(false), defEatPlant(true) {
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	totalReqPlant += getTotalPlant();
}

Herbivora::~Herbivora() {
	totalReqPlant -= getTotalPlant();
}

int Herbivora::getReqMeat() {
	return 0;
}

int Herbivora::getReqPlant() {
	return(ratioPlant * weight / 100);
}