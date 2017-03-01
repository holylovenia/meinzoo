#ifndef ANIMAL_DIET_H
#define ANIMAL_DIET_H

class AnimalDiet {
	public:
		// ctor
		AnimalDiet();
		// cctor
		AnimalDiet(AnimalDiet& A);
		// operator=
		AnimalDiet& operator=(AnimalDiet& A);
		// dtor
		~AnimalDiet();

		bool CanEatMeat();
		bool CanEatPlants();

	protected:
		bool eatMeat;
		bool eatPlants;
}

#endif