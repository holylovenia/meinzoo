#ifndef DUCK_H
#define DUCK_H

#include "aves.h"

/** @class Duck
  * Kelas Duck mendefinisikan atribut untuk duck.
  */
class Duck : public Aves {
  public :
    /** @brief Constructor
      * Menciptakan duck dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Duck(int _x, int _y);
    /** @brief Menampilkan interaksi dengan duck.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif