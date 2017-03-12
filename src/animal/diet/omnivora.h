#ifndef OMNIVORA_H
#define OMNIVORA_H

#include "animal_diet.h"

/** @class Omnivora
	* Kelas Omnivora mendifinisikan hewan pemakan daging dan tumbuhan.
	*/
class Omnivora: public AnimalDiet {
	public:
		/** @brief Constructor
			* Menciptakan Omnivora (pemakan daging dan tumbuhan).
			*/
		Omnivora();

		/** @brief Getter nilai kebutuhan makanan hewan dalam bentuk daging.
			* @return Jumlah daging yang dibutuhkan untuk hewan tertentu.
			*/
		int getReqMeat();

		/** @brief Getter nilai kebutuhan makanan hewan dalam bentuk tumbuhan.
			* @return Jumlah tumbuhan yang dibutuhkan untuk hewan tertentu.
			*/
		int getReqPlant();

	private:
		const bool defEatMeat;
		const bool defEatPlant;
};

#endif