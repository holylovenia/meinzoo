#include "duck.h"

Duck::Duck(int _x, int _y) : def_ID(16) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = true;
  is_water_animal = true;
  is_air_animal = true;
}
void Duck::Interact() {
  std::cout << "The duck just quacked loudly" << std::endl;
}