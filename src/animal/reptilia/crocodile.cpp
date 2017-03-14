#include "crocodile.h"

Crocodile::Crocodile(int _x, int _y) : def_ID(8) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = true;
  is_water_animal = true;
  is_air_animal = false;
}
void Crocodile::Interact() {
  std::cout << "The crocodile is laying still on a slab of rock" << std::endl;
}