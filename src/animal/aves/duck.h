#ifndef DUCK_H
#define DUCK_H

#include "aves.h"
#include "../diet/omnivora.h"
#include "../behavior/behavior_tame.h"

/** @class Duck
	* Kelas Duck mendefinisikan atribut untuk duck.
	*/
class Duck : public Aves, public Omnivora, public BehaviorTame {
	public :
		/** @
			* Menciptakan duck default dengan berat sesuai _weight.
			* @param _weight Nilai berat untuk duck.
			*/
		Duck(int _weight);

		/** @brief Menampilkan interaksi dengan duck.
			* Menuliskan interaksi ke layar.
			*/
		void Interact();

	private:
		const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
};

#endif