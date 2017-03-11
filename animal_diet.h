#ifndef ANIMAL_DIET_H
#define ANIMAL_DIET_H

class AnimalDiet {
	public:
		bool isHerbivore();
		bool isCarnivore();
		bool isOmnivore();

		virtual int getReqMeat() = 0;
		virtual int getReqPlant() = 0;

		static int getTotalMeat();
		static int getTotalPlant();

	protected:
		int weight;
		bool eatMeat;
		bool eatPlant;
		int ratioMeat;
		int ratioPlant;
		static int totalReqMeat;
		static int totalReqPlant;
};

#endif