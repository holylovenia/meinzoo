#ifndef PYTHON_H
#define PYTHON_H

#include "reptilia.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

/** @class Python
	* Kelas Python mendefinisikan atribut untuk python.
	*/
class Python : public Reptilia, public Carnivora, public BehaviorTame {
	public:
		/** @brief Constructor
			* Menciptakan python default dengan berat sesuai _weight.
			* @param _weight Nilai berat untuk python.
			*/
		Python(int _weight);

		/** @brief Menampilkan interaksi dengan python.
			* Menuliskan interaksi ke layar.
			*/
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif