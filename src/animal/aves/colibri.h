#ifndef COLIBRI_H
#define COLIBRI_H

#include "aves.h"

/** @class Colibri
  * Kelas Colibri mendefinisikan atribut untuk colibri.
  */
class Colibri : public Aves {
  public :
    /** @brief Constructor
      * Menciptakan colibri dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Colibri(int _x, int _y);
    /** @brief Menampilkan interaksi dengan colibri.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif