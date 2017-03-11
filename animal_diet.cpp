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
	return totalMeat;
}
int AnimalDiet::getTotalPlant() {
	return totalPlant;
}