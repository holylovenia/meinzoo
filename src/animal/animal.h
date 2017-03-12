#ifndef ANIMAL_H
#define ANIMAL_H

#include "../misc/point.h"
#include <string>
#include <iostream>

class Animal {
	public:
		// others
		virtual void Interact() = 0;
		friend void Move(Animal& A, int movement);
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