#ifndef KOMODO_H
#define KOMODO_H

#include "reptilia.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

/** @class Komodo
	* Kelas Komodo mendefinisikan atribut untuk komodo.
	*/
class Komodo : public Reptilia, public Carnivora, public BehaviorTame {
	public:
		/** @brief Constructor
			* Menciptakan komodo default dengan berat sesuai _weight.
			* @param _weight Nilai berat untuk komodo.
			*/
		Komodo(int _weight);

		/** @brief Menampilkan interaksi dengan komodo.
			* Menuliskan interaksi ke layar.
			*/
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif