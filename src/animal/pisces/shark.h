#ifndef SHARK_H
#define SHARK_H

#include "pisces.h"

/** @class Shark
  * Kelas Shark mendefinisikan atribut untuk shark.
  */
class Shark: public Pisces {
  public:
    /** @brief Constructor
      * Menciptakan shark dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Shark(int _x, int _y);
    /** @brief Menampilkan interaksi dengan shark.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif