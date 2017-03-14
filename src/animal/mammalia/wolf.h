#ifndef WOLF_H
#define WOLF_H

#include "mammalia.h"

/** @class Wolf
  * Kelas Wolf mendefinisikan atribut untuk wolf.
  */
class Wolf: public Mammalia {
  public:
    /** @brief Constructor
      * Menciptakan wolf dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Wolf(int _x, int _y);
    /** @brief Menampilkan interaksi dengan wolf.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif