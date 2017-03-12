#include "omnivora.h"

Omnivora::Omnivora(): defEatMeat(true), defEatPlant(true) {
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	totalReqMeat += getTotalMeat();
	totalReqPlant += getTotalPlant();
}

int Omnivora::getReqMeat() {
	return(ratioMeat * weight / 100);
}

int Omnivora::getReqPlant() {
	return (ratioPlant * weight / 100);
}