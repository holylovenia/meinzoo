int AnimalDiet::totalReqMeat = 0;
int AnimalDiet::totalReqPlant = 0;

#include "animal_diet.h"

bool AnimalDiet::isHerbivore() {
	return (!eatMeat && eatPlant);
}
bool AnimalDiet::isCarnivore() {
	return (eatMeat && !eatPlant);
}
bool AnimalDiet::isOmnivore() {
	return (eatMeat && eatPlant);
}

int AnimalDiet::getTotalMeat() {
	return totalReqMeat;
}
int AnimalDiet::getTotalPlant() {
	return totalReqPlant;
}