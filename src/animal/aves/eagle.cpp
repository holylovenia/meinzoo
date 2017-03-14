#include "eagle.h"

Eagle::Eagle(int _x, int _y) : def_ID(18) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = true;
  is_water_animal = false;
  is_air_animal = true;
}
void Eagle::Interact() {
  std::cout << "The eagle is roosting majestically on a tree" << std::endl;
}