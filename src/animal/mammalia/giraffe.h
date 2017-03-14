#ifndef GIRAFFE_H
#define GIRAFFE_H

#include "mammalia.h"

/** @class Giraffe
  * Kelas Giraffe mendefinisikan atribut untuk giraffe.
  */
class Giraffe: public Mammalia {
  public:
    /** @brief Constructor
      * Menciptakan giraffe dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Giraffe(int _x, int _y);
    /** @brief Menampilkan interaksi dengan giraffe.
      * Menuliskan interaksi ke layar.
      */ 
    void Interact();

  private:
    const int def_ID;
};

#endif