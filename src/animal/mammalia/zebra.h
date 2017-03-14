#ifndef ZEBRA_H
#define ZEBRA_H

#include "mammalia.h"

/** @class Zebra
  * Kelas Zebra mendefinisikan atribut untuk zebra.
  */
class Zebra: public Mammalia {
  public:
    /** @brief Constructor
      * Menciptakan zebra dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Zebra(int _x, int _y);
    /** @brief Menampilkan interaksi dengan zebra.
      * Menuliskan interaksi ke layar
      */
    void Interact();

  private:
    const int def_ID;
};

#endif