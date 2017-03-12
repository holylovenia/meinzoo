#ifndef CLOWNFISH_H
#define CLOWNFISH_H

#include "pisces.h"
#include "../diet/omnivora.h"
#include "../behavior/behavior_tame.h"
	
/** @class Clownfish
	* Kelas Clownfish mendefinisikan atribut untuk clownfish.
	*/
class Clownfish: public Pisces, public Omnivora, public BehaviorTame {
    public:
        /** @brief Constructor
        	* Menciptakan clownfish default dengan berat sesuai _weight.
			* @param _weight Nilai berat untuk clownfish.
        	*/
        Clownfish(int _weight);

        /** @brief Menampilkan interaksi dengan clownfish.
        	* Menuliskan interaksi ke layar.
        	*/
        void Interact();

    private:
        const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
};

#endif