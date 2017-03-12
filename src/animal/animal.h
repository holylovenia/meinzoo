#ifndef ANIMAL_H
#define ANIMAL_H

#include "../misc/point.h"
#include <string>
#include <iostream>

class Animal {
	public:
		// others
		Animal();
		virtual void Interact() = 0;
		void Move(int movement);
		bool IsLandAnimal();
		bool IsWaterAnimal();
		bool IsAirAnimal();
		
		Point getPosition();

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