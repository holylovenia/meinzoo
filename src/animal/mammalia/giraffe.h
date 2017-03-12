#ifndef GIRAFFE_H
#define GIRAFFE_H

#include "mammalia.h"
#include "../diet/herbivora.h"
#include "../behavior/behavior_tame.h"

/** @class Giraffe
	* Kelas Giraffe mendefinisikan atribut untuk giraffe.
	*/
class Giraffe: public Mammalia, public Herbivora, public BehaviorTame {
	public:
		/** @brief Constructor
			* Menciptakan giraffe default dengan berat sesuai _weight.
			* @param _weight Nilai berat untuk giraffe.
			*/
		Giraffe(int _weight);

		/** @brief Menampilkan interaksi dengan giraffe.
			* Menuliskan interaksi ke layar.
			*/ 
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif