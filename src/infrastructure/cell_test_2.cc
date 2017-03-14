#include "cell.h"
#include "facility/facility.h"
#include "facility/park.h"
#include "facility/restaurant.h"
#include "facility/road.h"
#include "facility/road_entrance.h"
#include "facility/road_exit.h"
#include "habitat/habitat.h"
#include "habitat/air_habitat.h"
#include "habitat/land_habitat.h"
#include "habitat/water_habitat.h"
#include <iostream>

using namespace std;

int main() {
  cout << "== Testing Cell-Park ==" << endl << endl;
  cout << "Activating constructor for Park(false, 'Ji Sung')" << endl;
  Park obj_park(false, "Ji Sung");
  cout << "Testing methods: " << endl;
  cout << "1. IsAccessible(): ";
  if (obj_park.IsAccessible()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "2. GetParkName(): " << obj_park.GetParkName() << endl;
  char c = obj_park.Render();
  cout << "3. Render(): " << c << endl << endl << endl;
  //////////////////////////////////////////////////////////////////////

  cout << "== Testing Cell-Restaurant ==" << endl << endl;
  cout << "Activating constructor for Restaurant(false, 'Queen')" << endl;
  Restaurant obj_restaurant(false, "Queen");
  cout << "Testing methods: " << endl;
  cout << "1. IsAccessible(): ";
  if (obj_restaurant.IsAccessible()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "2. GetRestaurantName(): " << obj_restaurant.GetRestaurantName() << endl;
  c = obj_restaurant.Render();
  cout << "3. Render(): " << c << endl << endl << endl; 
  ////////////////////////////////////////////////////////////////////////

  cout << "== Testing Cell-Road ==" << endl << endl;
  cout << "Activating constructor for Road(true)" << endl;
  Road obj_road(true);
  cout << "Testing methods: " << endl;
  cout << "1. IsAccessible(): ";
  if (obj_road.IsAccessible()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "2. IsEntrance(): ";
  if (obj_road.IsEntrance()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "3. IsExit(): ";
  if (obj_road.IsExit()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  c = obj_road.Render();
  cout << "3. Render(): " << c << endl << endl << endl;
  ///////////////////////////////////////////////////////////////////////////

  cout << "== Testing Cell-Road-Entrance ==" << endl << endl;
  cout << "Activating constructor for RoadEntrance(true)" << endl;
  RoadEntrance obj_road_entrance(true);
  cout << "Testing methods: " << endl;
  cout << "1. IsAccessible(): ";
  if (obj_road_entrance.IsAccessible()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "2. IsEntrance(): ";
  if (obj_road_entrance.IsEntrance()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "3. IsExit(): ";
  if (obj_road_entrance.IsExit()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  c = obj_road_entrance.Render();
  cout << "3. Render(): " << c << endl << endl << endl;
  ///////////////////////////////////////////////////////////////////////////

  cout << "== Testing Cell-Road-Exit ==" << endl << endl;
  cout << "Activating constructor for RoadExit(true)" << endl;
  RoadExit obj_road_exit(true);
  cout << "Testing methods: " << endl;
  cout << "1. IsAccessible(): ";
  if (obj_road_exit.IsAccessible()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "2. IsEntrance(): ";
  if (obj_road_exit.IsEntrance()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "3. IsExit(): ";
  if (obj_road_exit.IsExit()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  c = obj_road_exit.Render();
  cout << "3. Render(): " << c << endl << endl << endl;
  ///////////////////////////////////////////////////////////////////////////

  cout << "== Testing Habitat-AirHabitat ==" << endl << endl;
  cout << "Activating constructor for AirHabitat()" << endl;
  AirHabitat* obj_air_habitat = new AirHabitat;
  cout << "Testing methods: " << endl;
  c = obj_air_habitat->Render();
  cout << "1. Render(): " << c << endl << endl << endl;
  delete obj_air_habitat;
  ///////////////////////////////////////////////////////////////////////////

  cout << "== Testing Habitat-LandHabitat ==" << endl << endl;
  cout << "Activating constructor for LandHabitat()" << endl;
  LandHabitat* obj_land_habitat = new LandHabitat;
  cout << "Testing methods: " << endl;
  c = obj_land_habitat->Render();
  cout << "1. Render(): " << c << endl << endl << endl;
  delete obj_land_habitat;
  ///////////////////////////////////////////////////////////////////////////

  cout << "== Testing Habitat-WaterHabitat ==" << endl << endl;
  cout << "Activating constructor for WaterHabitat()" << endl;
  WaterHabitat* obj_water_habitat = new WaterHabitat;
  cout << "Testing methods: " << endl;
  c = obj_water_habitat->Render();
  cout << "1. Render(): " << c << endl << endl << endl;
  delete obj_water_habitat;

  return 0;
}