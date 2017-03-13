#include "omnivora.h"

Omnivora::Omnivora(): def_eat_meat(true), def_eat_plant(true) {
  eat_meat = def_eat_meat;
  eatPlant = def_eat_plant;
  total_req_meat += GetTotalMeat();
  total_req_plant += GetTotalPlant();
}
Omnivora::~Omnivora() {
  total_req_meat -= GetTotalMeat();
  total_req_plant -= GetTotalPlant();
}
int Omnivora::GetReqMeat() {
  return (ratio_meat * weight / 100);
}
int Omnivora::GetReqPlant() {
  return (ratio_plant * weight / 100);
}