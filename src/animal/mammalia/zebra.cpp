#include "zebra.h"

Zebra::Zebra(int _x, int _y) : def_ID(4) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = true;
  is_water_animal = false;
  is_air_animal = false;
}
void Zebra::Interact() {
  std::cout << "The zebra is running at the grass field" << std::endl;
}