#include "colibri.h"

Colibri::Colibri(int _x, int _y) : def_ID(19) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = true;
  is_water_animal = false;
  is_air_animal = true;
}
void Colibri::Interact() {
  std::cout << "The colibri is looking at you, apparently confused" << std::endl;
}