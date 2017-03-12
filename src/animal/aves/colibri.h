#ifndef COLIBRI_H
#define COLIBRI_H

#include "aves.h"
#include "../diet/herbivora.h"
#include "../behavior/behavior_tame.h"

/** @class Colibri
	* Kelas Colibri mendefinisikan atribut untuk colibri.
	*/
class Colibri : public Aves, public Herbivora, public BehaviorTame {
	public :
		/** @brief Constructor
			* Menciptakan colibri default dengan berat sesuai _weight.
			* @param _weight Nilai berat untuk hewan.
			*/
		Colibri(int _weight);

		/** @brief Menampilkan interaksi dengan hewan tertentu.
			* Menuliskan interaksi hewan ke layar.
			*/
		void Interact();

	private:
		const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
};

#endif