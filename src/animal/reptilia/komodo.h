#ifndef KOMODO_H
#define KOMODO_H

#include "reptilia.h"

/** @class Komodo
  * Kelas Komodo mendefinisikan atribut untuk komodo.
  */
class Komodo : public Reptilia {
  public:
    /** @brief Constructor
      * Menciptakan komodo dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */
    Komodo(int _x, int _y);
    /** @brief Menampilkan interaksi dengan komodo.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif