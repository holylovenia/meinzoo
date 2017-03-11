// File: omnivora.cpp


#include "omnivora.h"


Omnivora::Omnivora(): defEatMeat(true), defEatPlant(true)
{
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	totalReqMeat += getTotalMeat();
	totalReqPlant += getTotalPlant();
}

Carnivora::getTotalMeat()
{
	return(ratioMeat * weight / 100);
}

Carnivora::getTotalPlant()
{
	return (ratioPlant * weight / 100);
}