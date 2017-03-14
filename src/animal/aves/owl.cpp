#include "owl.h"

Owl::Owl(int _x, int _y) : def_ID(17) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = true;
  is_water_animal = false;
  is_air_animal = true;
}
void Owl::Interact() {
  std::cout << "The owl is hooting randomly" << std::endl;
}