#ifndef PEACOCK_H
#define PEACOCK_H

#include "aves.h"

/** @class Peacock
  * Kelas Peacock mendefinisikan atribut untuk peacock.
  */
class Peacock : public Aves {
  public :
    /** @brief Constructor
      * Menciptakan peacock dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Peacock(int _x, int _y);
    /** @brief Menampilkan interaksi dengan peacock.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif