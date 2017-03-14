#include "python.h"

Python::Python(int _x, int _y) : def_ID(9) {
  ID = def_ID;
  position.SetX(_x);
  position.SetY(_y);
  is_land_animal = true;
  is_water_animal = false;
  is_air_animal = false;
  limb_count = 0;
}
void Python::Interact() {
  std::cout << "The python is slithering across the ground" << std::endl;
}