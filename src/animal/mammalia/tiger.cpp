#include "tiger.h"

Tiger::Tiger(int _x, int _y) : def_ID(3) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = true;
  is_water_animal = false;
  is_air_animal = false;
}
void Tiger::Interact() {
  std::cout << "The tiger is graciously lying on the grass" << std::endl;
}