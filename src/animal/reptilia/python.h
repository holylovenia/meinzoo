#ifndef PYTHON_H
#define PYTHON_H

#include "reptilia.h"

/** @class Python
  * Kelas Python mendefinisikan atribut untuk python.
  */
class Python : public Reptilia {
  public:
    /** @brief Constructor
      * Menciptakan python dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Python(int _x, int _y);
    /** @brief Menampilkan interaksi dengan python.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif