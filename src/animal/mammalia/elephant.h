#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "mammalia.h"

/** @class Elephant
  * Kelas Elephant mendefinisikan atribut untuk elephant.
  */
class Elephant: public Mammalia {
  public:
    /** @brief Constructor
      * Menciptakan elephant dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Elephant(int _x, int _y);
    /** @brief Menampilkan interaksi dengan elephant.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif