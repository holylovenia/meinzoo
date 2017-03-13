#include "barracuda.h"

Barracuda::Barracuda(int _x, int _y, int _weight) : def_ID(15), def_ratio_meat(60), def_ratio_plant(0) {
    ID = def_ID;
    position.setX(_x);
    position.setY(_y);
    ratio_meat = def_ratio_meat;
    ratio_plant = def_ratio_plant;
    is_land_animal = false;
    is_water_animal = true;
    is_air_animal = false;
    weight = _weight;
}

void Barracuda::Interact() {
    std::cout << "The barracuda completely ignores you" << std::endl;
}