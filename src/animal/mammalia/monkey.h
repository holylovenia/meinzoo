#ifndef MONKEY_H
#define MONKEY_H

#include "mammalia.h"

/** @class Monkey
  * Kelas Monkey mendefinisikan atribut untuk monkey.
  */
class Monkey: public Mammalia {
  public:
    /** @brief Constructor
      * Menciptakan monkey dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat..
      */
    Monkey(int _x, int _y);
    /** @brief Menampilkan interaksi dengan monkey.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif