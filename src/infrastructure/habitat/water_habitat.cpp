// File: water_habitat.cpp


#include "water_habitat.h"


WaterHabitat::WaterHabitat(): defType('W') {
	type = defType;
}

char WaterHabitat::render() {
	return 'w';
}