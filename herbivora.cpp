// File: herbivora.cpp


#include "herbivora.h"


Herbivora::Herbivora(): defEatMeat(false), defEatPlant(true)
{
	eatMeat = defEatMeat;
	eatPlant = defEatPlant;
	totalReqPlant += getTotalPlant();
}

Herbivora::getTotalMeat()
{
	return 0;
}

Herbivora::getTotalPlant()
{
	return(weight);
}