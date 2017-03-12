#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "mammalia.h"
#include "../diet/herbivora.h"
#include "../behavior/behavior_tame.h"

/** @class Elephant
	* Kelas Elephant mendefinisikan atribut untuk elephant.
	*/
class Elephant: public Mammalia, public Herbivora, public BehaviorTame {
	public:
		/** @brief Constructor
			* Menciptakan elephant default dengan berat sesuai _weight.
			* @param _x Nilai posisi absis.
			* @param _y Nilai posisi ordinat.
			* @param _weight Nilai berat untuk elephant.
			*/
		Elephant(int _x, int _y, int _weight);

		/** @brief Menampilkan interaksi dengan elephant.
			* Menuliskan interaksi ke layar.
			*/
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif