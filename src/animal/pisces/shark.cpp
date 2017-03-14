#include "shark.h"

Shark::Shark(int _x, int _y) : def_ID(13) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = false;
  is_water_animal = true;
  is_air_animal = false;
}
void Shark::Interact() {
  std::cout << "The shark is staring at you menacingly" << std::endl;
}