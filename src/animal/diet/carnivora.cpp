#include "carnivora.h"


Carnivora::Carnivora(): defEatMeat(true), defEatPlant(false) {
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	totalReqMeat += getReqMeat();
}

int Carnivora::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Carnivora::getReqPlant() {
	return 0;
}