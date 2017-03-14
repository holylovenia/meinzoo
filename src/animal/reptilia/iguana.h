#ifndef IGUANA_H
#define IGUANA_H

#include "reptilia.h"

/** @class Iguana
  * Kelas Iguana mendefinisikan atribut untuk iguana.
  */
class Iguana : public Reptilia {
  public:
    /** @brief Constructor
      * Menciptakan iguana dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Iguana(int _x, int _y);
    /** @brief Menampilkan interaksi dengan iguana.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif