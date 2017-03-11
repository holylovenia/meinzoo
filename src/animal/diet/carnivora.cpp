// File: carnivora.cpp


#include "carnivora.h"


Carnivora::Carnivora(): defEatMeat(true), defEatPlant(false)
{
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	totalReqMeat += getTotalMeat();
}

int Carnivora::getTotalMeat()
{
	return(ratioMeat * weight / 100);
}

int Carnivora::getTotalPlant()
{
	return 0;
}