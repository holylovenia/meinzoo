#ifndef LION_H
#define LION_H

#include "mammalia.h"

/** @class Lion
  * Kelas Lion mendefinisikan atribut untuk lion.
  */
class Lion: public Mammalia {
  public:
    /** @brief Constructor
      * Menciptakan lion dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Lion(int _x, int _y);
    /** @brief Menampilkan interaksi dengan lion.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif