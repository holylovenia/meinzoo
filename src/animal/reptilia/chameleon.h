#ifndef CHAMELEON_H
#define CHAMELEON_H

#include "reptilia.h"

/** @class Chameleon
  * Kelas Chameleon mendefinisikan atribut untuk chameleon.
  */
class Chameleon : public Reptilia {
  public:
    /** @brief Constructor
      * Menciptakan chameleon dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Chameleon(int _x, int _y);
    /** @brief Menampilkan interaksi dengan chameleon.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif