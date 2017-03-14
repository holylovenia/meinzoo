#ifndef TIGER_H
#define TIGER_H

#include "mammalia.h"

/** @class Tiger
  * Kelas Tiger mendefinisikan atribut untuk tiger.
  */
class Tiger: public Mammalia {
  public:
    /** @brief Constructor
      * Menciptakan tiger dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Tiger(int _x, int _y);
    /** @brief Menampilkan interaksi dengan tiger.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif