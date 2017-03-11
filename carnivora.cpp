// File: carnivora.cpp


#include "carnivora.h"


Carnivora::Carnivora(): defEatMeat(true), defEatPlant(false)
{
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	totalReqMeat += getTotalMeat();
}

Carnivora::getTotalMeat()
{
	return(ratioMeat * weight / 100);
}

Carnivora::getTotalPlant()
{
	return 0;
}