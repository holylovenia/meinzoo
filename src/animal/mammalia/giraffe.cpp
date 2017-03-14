#include "giraffe.h"

Giraffe::Giraffe(int _x, int _y) : def_ID(3) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = true;
  is_water_animal = false;
  is_air_animal = false;
}
void Giraffe::Interact() {
  std::cout << "The giraffe is looking down to you, literally" << std::endl;
}