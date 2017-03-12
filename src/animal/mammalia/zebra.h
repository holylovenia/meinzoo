#ifndef ZEBRA_H
#define ZEBRA_H

#include "mammalia.h"
#include "herbivora.h"
#include "behavior_tame.h"

/** @class Zebra
	* Kelas Zebra mendefinisikan atribut untuk zebra.
	*/
class Zebra: public Mammalia, public Herbivora, public BehaviorTame
{
	public:
		/** @brief Constructor
			* Menciptakan zebra default dengan berat sesuai _weight.
			* @param _x Nilai posisi absis.
			* @param _y Nilai posisi ordinat.
			* @param _weight Nilai berat untuk zebra.
			*/
		Zebra(int _x, int _y, int _weight);
		
		/** @brief Menampilkan interaksi dengan zebra.
			* Menuliskan interaksi ke layar
			*/
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif