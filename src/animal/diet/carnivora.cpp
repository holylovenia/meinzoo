#include "carnivora.h"

Carnivora::Carnivora(): def_eat_meat(true), def_eat_plant(false) {
  eat_meat = def_eat_meat;
  eatPlant = def_eat_plant;
  total_req_meat += GetReqMeat();
}
Carnivora::~Carnivora() {
  total_req_meat -= GetReqMeat();
}
int Carnivora::GetReqMeat() {
  return (ratio_meat * weight / 100);
}
int Carnivora::GetReqPlant() {
  return 0;
}