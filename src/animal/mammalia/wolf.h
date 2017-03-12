#ifndef WOLF_H
#define WOLF_H

#include "mammalia.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

/** @class Wolf
	* Kelas Wolf mendefinisikan atribut untuk wolf.
	*/
class Wolf: public Mammalia, public Carnivora, public BehaviorTame {
	public:
		/** @brief Constructor
			* Menciptakan wolf default dengan berat sesuai _weight.
			* @param _weight Nilai berat untuk wolf.
			*/
		Wolf(int _weight);

		/** @brief Menampilkan interaksi dengan wolf.
			* Menuliskan interaksi ke layar.
			*/
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif