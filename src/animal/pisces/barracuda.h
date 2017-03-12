#ifndef BARRACUDA_H
#define BARRACUDA_H

#include "pisces.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

/** @class Barracuda
	* Kelas Barracuda mendefinisikan atribut untuk barracuda.
	*/
class Barracuda: public Pisces, public Carnivora, public BehaviorTame {
    public:
    	/** @brief Constructor
    		* Menciptakan barracuda default dengan berat sesuai _weight.
    		* @param _weight Nilai berat untuk barracuda.
    		*/
        Barracuda(int _weight);
        
        /** @brief Menampilkan interaksi dengan barracuda.
        	* Menuliskan interaksi ke layar.
        	*/
        void Interact();

    private:
        const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
};

#endif