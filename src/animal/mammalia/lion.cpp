#include "lion.h"

Lion::Lion(int _x, int _y) : def_ID(2) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = true;
  is_water_animal = false;
  is_air_animal = false;
}
void Lion::Interact() {
  std::cout << "The lion is roaring" << std::endl;
}