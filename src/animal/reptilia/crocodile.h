#ifndef CROCODILE_H
#define CROCODILE_H

#include "reptilia.h"

/** @class Crocodile
  * Kelas Crocodile mendefinisikan atribut untuk crocodile.
  */
class Crocodile : public Reptilia {
  public:
    /** @brief Constructor
      * Menciptakan crocodile dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Crocodile(int _x, int _y);
    /** @brief Menampilkan interaksi dengan crocodile.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif