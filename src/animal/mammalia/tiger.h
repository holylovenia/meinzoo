#ifndef TIGER_H
#define TIGER_H

#include "mammalia.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

/** @class Tiger
	* Kelas Tiger mendefinisikan atribut untuk tiger.
	*/
class Tiger: public Mammalia, public Carnivora, public BehaviorTame {
	public:
		/** @brief Constructor
			* Menciptakan tiger default dengan berat sesuai _weight.
			* @param _x Nilai posisi absis.
			* @param _y Nilai posisi ordinat.
			* @param _weight Nilai berat untuk tiger
			*/
		Tiger(int _x, int _y, int _weight);

		/** @brief Menampilkan interaksi dengan tiger.
			* Menuliskan interaksi ke layar.
			*/
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif