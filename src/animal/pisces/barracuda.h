#ifndef BARRACUDA_H
#define BARRACUDA_H

#include "pisces.h"

/** @class Barracuda
  * Kelas Barracuda mendefinisikan atribut untuk barracuda.
  */
class Barracuda: public Pisces {
  public:
    /** @brief Constructor
      * Menciptakan barracuda dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Barracuda(int _x, int _y);
    /** @brief Menampilkan interaksi dengan barracuda.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif