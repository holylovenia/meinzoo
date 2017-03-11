#ifndef ANIMAL_DIET_H
#define ANIMAL_DIET_H

class AnimalDiet {
	public:
		bool isHerbivore();
		bool isCarnivore();
		bool isOmnivore();

		int getTotalMeat();
		int getTotalPlant();

	protected:
		int reqMeat;
		int reqPlant;
		bool eatMeat;
		bool eatPlant;

	private:
		static int totalReqMeat;
		static int totalReqPlant;
};

#endif