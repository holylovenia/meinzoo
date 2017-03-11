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
	return(weight);
}

Carnivora::getTotalPlant()
{
	return (weight);
}