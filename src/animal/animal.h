#ifndef ANIMAL_H
#define ANIMAL_H

#include "point.h"
#include <string>
#include <set>
#include <iostream>

class Animal {
	public:
		// others
		virtual void Interact() = 0;
		virtual void Move(int movement);
		bool IsLandAnimal();
		bool IsWaterAnimal();
		bool IsAirAnimal();

	protected:
		int ID;
		int limbCount;
		std::string skinType;
		bool isLandAnimal;
		bool isWaterAnimal;
		bool isAirAnimal;
		Point position;
};

#endif