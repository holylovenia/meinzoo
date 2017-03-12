#ifndef EAGLE_H
#define EAGLE_H

#include "aves.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

/** @class Eagle
	* Kelas Eagle mendefinisikan atribut untuk eagle.
	*/
class Eagle : public Aves, public Carnivora, public BehaviorTame {
	public :
		/** @brief Constructor
			* Menciptakan eagle default dengan berat sesuai _weight.
			* @param _weight Nilai berat untuk Eagle.
			*/
		Eagle(int _weight);
		
		/** @brief Menampilkan interaksi dengan eagle.
			* Menuliskan interaksi ke layar.
			*/
		void Interact();

	private:
		const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
};

#endif