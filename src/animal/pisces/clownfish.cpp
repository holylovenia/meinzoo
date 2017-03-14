#include "clownfish.h"

Clownfish::Clownfish(int _x, int _y) : def_ID(14) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = false;
  is_water_animal = true;
  is_air_animal = false;
}
void Clownfish::Interact() {
  std::cout << "The clownfish is not as funny as its name..." << std::endl;
}