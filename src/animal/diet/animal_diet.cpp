#include "animal_diet.h"

int AnimalDiet::total_req_meat = 0;
int AnimalDiet::total_req_plant = 0;
bool AnimalDiet::IsHerbivore() {
  return (!eat_meat && eat_plant);
}
bool AnimalDiet::IsCarnivore() {
  return (eat_meat && !eat_plant);
}
bool AnimalDiet::IsOmnivore() {
  return (eat_meat && eat_plant);
}
int AnimalDiet::GetTotalMeat() {
  return total_req_meat;
}
int AnimalDiet::GetTotalPlant() {
  return total_req_plant;
}