// File: omnivora.cpp


#include "omnivora.h"


Omnivora::Omnivora(): defEatMeat(true), defEatPlant(true)
{
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	totalReqMeat += getTotalMeat();
	totalReqPlant += getTotalPlant();
}

int Omnivora::getTotalMeat()
{
	return(ratioMeat * weight / 100);
}

int Omnivora::getTotalPlant()
{
	return (ratioPlant * weight / 100);
}