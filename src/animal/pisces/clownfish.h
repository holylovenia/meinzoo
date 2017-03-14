#ifndef CLOWNFISH_H
#define CLOWNFISH_H

#include "pisces.h"
  
/** @class Clownfish
  * Kelas Clownfish mendefinisikan atribut untuk clownfish.
  */
class Clownfish: public Pisces {
  public:
    /** @brief Constructor
      * Menciptakan clownfish dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Clownfish(int _x, int _y);
    /** @brief Menampilkan interaksi dengan clownfish.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif