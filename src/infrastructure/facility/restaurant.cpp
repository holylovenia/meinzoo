// file : restaurant.h

#include "restaurant.h"

// ctor with parameter
Restaurant::Restaurant(bool accessible, std::string _name): Facility(accessible), def_facility_type("Restaurant"), name(_name) {
  facility_type = def_facility_type;
}
// cctor
Restaurant::Restaurant(const Restaurant& R): Facility(R.is_accessible), def_facility_type("Restaurant"), name(R.name) {
  name = R.name;
  facility_type = R.facility_type;
}
// operator=
Restaurant& Restaurant::operator=(const Restaurant& R) {
  name = R.name;
  facility_type = R.facility_type;
  is_accessible = R.is_accessible;
  return *this;
}
// get Restaurant's name
std::string Restaurant::GetRestaurantName() {
  return name;
}

char Restaurant::Render() {
  return 'R';
}