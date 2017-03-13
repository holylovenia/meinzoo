// File: air_habitat.cpp


#include "air_habitat.h"


AirHabitat::AirHabitat(): defType('A') {
	type = defType;
}

char AirHabitat::render() {
	return 'a';
}