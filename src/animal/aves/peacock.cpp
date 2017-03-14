#include "peacock.h"

Peacock::Peacock(int _x, int _y) : def_ID(20) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = true;
  is_water_animal = false;
  is_air_animal = false;
}
void Peacock::Interact() {
  std::cout << "The peacock is showing off its beautiful feather" << std::endl;
}