#ifndef ANIMAL_DIET_H
#define ANIMAL_DIET_H

/** @class AnimalDiet
	* Kelas AnimalDiet mendifinisikan jenis makanan hewan.
	*/
class AnimalDiet {
	public:
		/** @brief Menentukan apakah hewan merupakan herbivora.
			* @return Nilai true/flase hewan merupakan herbivora. 
			*/
		bool isHerbivore();
		
		/** @brief Menentukan apakah hewan merupakan carnivora.
			* @return Nilai true/flase hewan merupakan carnivora. 
			*/
		bool isCarnivore();

		/** @brief Menentukan apakah hewan merupakan omnivora.
			* @return Nilai true/flase hewan merupakan omnivora. 
			*/
		bool isOmnivore();

		/** @brief Pure virtual method
			* Didefinisikan pada kelas turunan.
			*/
		virtual int getReqMeat() = 0;
		
		/** @brief Pure virtual method
			* Didefinisikan pada kelas turunan.
			*/
		virtual int getReqPlant() = 0;

		/** @brief Getter nilai totalReqMeat.
			* @return Nilai totalReqMeat.
			*/
		static int getTotalMeat();
		
		/** @brief Getter nilai totalReqPlant.
			* @return Nilai totalReqPlant.
			*/		
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