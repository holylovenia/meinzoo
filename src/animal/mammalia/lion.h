#ifndef LION_H
#define LION_H

#include "mammalia.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

/** @class Lion
	* Kelas Lion mendefinisikan atribut untuk lion.
	*/
class Lion: public Mammalia, public Carnivora, public BehaviorTame {
	public:
		/** @brief Constructor
			* Menciptakan lion default dengan berat sesuai _weight.
			* @param _weight Nilai berat untuk lion.
			* @param _x Nilai posisi absis.
			* @param _y Nilai posisi ordinat.
			*/
		Lion(int _weight, int _x, int _y);

		/** @brief Menampilkan interaksi dengan lion.
			* Menuliskan interaksi ke layar.
			*/
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif