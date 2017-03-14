#include "chameleon.h"

Chameleon::Chameleon(int _x, int _y) : def_ID(10) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = true;
  is_water_animal = false;
  is_air_animal = false;
}
void Chameleon::Interact() {
  std::cout << "The chameleon can be barely seen" << std::endl;
}