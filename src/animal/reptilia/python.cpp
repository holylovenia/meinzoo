#include "python.h"

Python::Python(int _x, int _y, int _weight) : def_ID(9), def_ratio_meat(40), def_ratio_plant(0) {
  ID = def_ID;
  ratio_meat = def_ratio_meat;
  ratio_plant = def_ratio_plant;
  is_land_animal = true;
  is_water_animal = false;
  is_air_animal = false;
  limb_count = 0;
  weight = _weight;
}
void Python::Interact() {
  std::cout << "The python is slithering across the ground" << std::endl;
}