#ifndef PEACOCK_H
#define PEACOCK_H

#include "aves.h"
#include "../diet/omnivora.h"
#include "../behavior/behavior_tame.h"

/** @class Peacock
	* Kelas Peacock mendefinisikan atribut untuk peacock.
	*/
class Peacock : public Aves, public Omnivora, public BehaviorTame {
	public :
		/** @brief Constructor
			* Menciptakan peacock default dengan berat sesuai _weight.
			* @param _weight Nilai berat untuk peacock.
			*/
		Peacock(int _weight);

		/** @brief Menampilkan interaksi dengan peacock.
			* Menuliskan interaksi ke layar.
			*/
		void Interact();

	private:
		const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
};

#endif