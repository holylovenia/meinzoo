#include "barracuda.h"

Barracuda::Barracuda(int _x, int _y) : def_ID(15) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = false;
  is_water_animal = true;
  is_air_animal = false;
}
void Barracuda::Interact() {
  std::cout << "The barracuda completely ignores you" << std::endl;
}