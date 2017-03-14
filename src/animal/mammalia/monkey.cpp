#include "monkey.h"

Monkey::Monkey(int _x, int _y) : def_ID(5) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = true;
  is_water_animal = false;
  is_air_animal = false;
}
void Monkey::Interact() {
  std::cout << "The monkey is peeling a banana" << std::endl;
}