#ifndef CHAMELEON_H
#define CHAMELEON_H

#include "reptilia.h"
#include "../diet/omnivora.h"
#include "../behavior/behavior_tame.h"

/** @class Chameleon
	* Kelas Chameleon mendefinisikan atribut untuk chameleon.
	*/
class Chameleon : public Reptilia, public Omnivora, public BehaviorTame {
	public:
		/** @brief Constructor
			* Menciptakan chameleon default dengan berat sesuai _weight.
			* @param _weight Nilai berat untuk chameleon.
			*/
		Chameleon(int _weight);
		
		/** @brief Menampilkan interaksi dengan chameleon.
			* Menuliskan interaksi ke layar.
			*/
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif