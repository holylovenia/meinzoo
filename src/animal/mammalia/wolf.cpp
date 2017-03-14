#include "wolf.h"

Wolf::Wolf(int _x, int _y) : def_ID(1) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = true;
  is_water_animal = false;
  is_air_animal = false;
}
void Wolf::Interact() {
  std::cout << "The wolf is howling" << std::endl;
}