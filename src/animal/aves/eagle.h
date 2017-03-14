#ifndef EAGLE_H
#define EAGLE_H

#include "aves.h"

/** @class Eagle
  * Kelas Eagle mendefinisikan atribut untuk eagle.
  */
class Eagle : public Aves {
  public :
    /** @brief Constructor
      * Menciptakan eagle dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat..
      */
    Eagle(int _x, int _y);
    /** @brief Menampilkan interaksi dengan eagle.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif