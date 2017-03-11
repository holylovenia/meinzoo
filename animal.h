#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <set>

class Animal {
	public:
		// others
		virtual void Interact() = 0;
		virtual void Move() = 0;

	protected:
		int ID;
		int limbCount;
		std::string skinType;
		bool isLandAnimal;
		bool isWaterAnimal;
		bool isAirAnimal;
};

#endif