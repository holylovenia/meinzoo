#ifndef SHARK_H
#define SHARK_H

#include "pisces.h"
#include "../diet/carnivora.h"
#include "../behavior/behavior_tame.h"

/** @class Shark
	* Kelas Shark mendefinisikan atribut untuk shark.
	*/
class Shark: public Pisces, public Carnivora, public BehaviorTame {
    public:
        /** @brief Constructor
        	* Menciptakan shark default dengan berat sesuai _weight
        	* @param _weight Nilai berat untuk shark.
            * @param _x Nilai posisi absis.
            * @param _y Nilai posisi ordinat.
        	*/
        Shark(int _x, int _y, int _weight);
        
        /** @brief Menampilkan interaksi dengan shark.
        	* Menuliskan interaksi ke layar.
        	*/
        void Interact();

    private:
        const int defID;
        const int defRatioMeat;
        const int defRatioPlant;
};

#endif