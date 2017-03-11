#ifndef ANIMAL_DIET_H
#define ANIMAL_DIET_H

class AnimalDiet {
	public:
		bool CanEatMeat();
		bool CanEatPlants();

	protected:
		bool eatMeat;
		bool eatPlants;
};

#endif