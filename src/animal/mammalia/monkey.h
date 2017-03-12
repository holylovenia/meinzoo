#ifndef MONKEY_H
#define MONKEY_H

#include "mammalia.h"
#include "../diet/omnivora.h"
#include "../behavior/behavior_tame.h"

/** @class Monkey
	* Kelas Monkey mendefinisikan atribut untuk monkey.
	*/
class Monkey: public Mammalia, public Omnivora, public BehaviorTame {
	public:
		/** @brief Constructor
			* Menciptakan monkey default dengan berat sesuai _weight.
			* @param _weight Nilai berat untuk monkey.
			*/
		Monkey(int _weight);

		/** @brief Menampilkan interaksi dengan monkey.
			* Menuliskan interaksi ke layar.
			*/
		void Interact();

	private:
		const int defID;
		const int defRatioMeat;
		const int defRatioPlant;
};

#endif