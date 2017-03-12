#ifndef CROCODILE_H
#define CROCODILE_H

#include "reptilia.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

/** @class Crocodile
	* Kelas Crocodile mendefinisikan atribut untuk crocodile.
	*/
class Crocodile : public Reptilia, public Carnivora, public BehaviorTame {
	public:
		/** @brief Constructor
			* Menciptakan crocodile default dengan berat sesuai _weight.
			* @param _weight Nilai berat untuk crocodile.
			*/
		Crocodile(int _weight);

		/** @brief Menampilkan interaksi dengan crocodile.
			* Menuliskan interaksi ke layar.
			*/
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif