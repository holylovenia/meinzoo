#ifndef OWL_H
#define OWL_H

#include "aves.h"

/** @class Owl
  * Kelas Owl mendefinisikan atribut untuk owl.
  */
class Owl : public Aves {
  public :
    /** @brief Constructor
      * Menciptakan owl dengan posisi (_x,_y).
      * @param _x Nilai posisi absis.
      * @param _y Nilai posisi ordinat.
      */  
    Owl(int _x, int _y);
    /** @brief Menampilkan interaksi dengan owl.
      * Menuliskan interaksi ke layar.
      */
    void Interact();

  private:
    const int def_ID;
};

#endif