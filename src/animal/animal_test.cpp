#include "animal.h"
#include "aves/aves.h"
#include "aves/colibri.h"
#include "aves/duck.h"
#include "aves/eagle.h"
#include "aves/owl.h"
#include "aves/peacock.h"
#include "aves/wild_colibri.h"
#include "behavior/animal_behavior.h"
#include "behavior/behavior_tame.h"
#include "behavior/behavior_wild.h"
#include "diet/animal_diet.h"
#include "diet/carnivora.h"
#include "diet/herbivora.h"
#include "diet/omnivora.h"
#include "mammalia/mammalia.h"
#include "mammalia/elephant.h"
#include "mammalia/giraffe.h"
#include "mammalia/lion.h"
#include "mammalia/monkey.h"
#include "mammalia/tiger.h"
#include "mammalia/wild_bunny.h"
#include "mammalia/wolf.h"
#include "mammalia/zebra.h"
#include "pisces/pisces.h"
#include "pisces/barracuda.h"
#include "pisces/clownfish.h"
#include "pisces/shark.h"
#include "reptilia/reptilia.h"
#include "reptilia/chameleon.h"
#include "reptilia/crocodile.h"
#include "reptilia/iguana.h"
#include "reptilia/komodo.h"
#include "reptilia/python.h"
#include <iostream>

using namespace std;

int main() {
  cout << "== Testing Animal-Colibri ==" << endl << endl;
  cout << "Activating constructor for colibri(2, 2, 100)" << endl;
  Colibri obj_colibri(2, 2, 100);
  cout << "Testing methods:" << endl;
  cout << "1. Interact(): ";
  obj_colibri.Interact();
  cout << "2. IsLandAnimal(): ";
  if (obj_colibri.IsLandAnimal()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "3. IsWaterAnimal(): ";
  if (obj_colibri.IsWaterAnimal()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "4. IsAirAnimal(): ";
  if (obj_colibri.IsAirAnimal()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "5. IsHerbivore(): ";
  if (obj_colibri.IsHerbivore()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "6. IsCarnivore(): ";
  if (obj_colibri.IsCarnivore()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "7. IsOmnivore(): ";
  if (obj_colibri.IsOmnivore()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "8. GetReqMeat(): " << obj_colibri.GetReqMeat() << endl;
  cout << "9. GetReqPlant(): " << obj_colibri.GetReqPlant() << endl;
  cout << "10. GetPosition(): ";
  Point P = obj_colibri.GetPosition();
  cout << "(" << P.GetX() << "," << P.GetY() << ")" << endl;
  cout << "11. Move(1): " <<  "Move Up, new position: ";
  obj_colibri.Move(1);
  P = obj_colibri.GetPosition();
  cout << "(" << P.GetX() << "," << P.GetY() << ")" << endl;
  cout << "12. Move(2): " <<  "Move Right, new position: ";
  obj_colibri.Move(2);
  P = obj_colibri.GetPosition();
  cout << "(" << P.GetX() << "," << P.GetY() << ")" << endl;
  cout << "13. Move(3): " <<  "Move Down, new position: ";
  obj_colibri.Move(3);
  P = obj_colibri.GetPosition();
  cout << "(" << P.GetX() << "," << P.GetY() << ")" << endl;
  cout << "14. Move(4): " <<  "Move Left, new position: ";
  obj_colibri.Move(4);
  P = obj_colibri.GetPosition();
  cout << "(" << P.GetX() << "," << P.GetY() << ")" << endl;
  char c = obj_colibri.Render();
  cout << "15. Render(): " << c << endl << endl << endl;

  ///////////////////////////////////////////////////////////////////
  cout << "== Testing Animal-WildColibri ==" << endl << endl;
  cout << "Activating constructor for wild_colibri(5, 5, 100)" << endl;
  WildColibri obj_wild_colibri(5, 5, 100);
  cout << "Testing methods:" << endl;
  cout << "1. Interact(): ";
  obj_wild_colibri.Interact();
  cout << "2. IsLandAnimal(): ";
  if (obj_wild_colibri.IsLandAnimal()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "3. IsWaterAnimal(): ";
  if (obj_wild_colibri.IsWaterAnimal()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "4. IsAirAnimal(): ";
  if (obj_wild_colibri.IsAirAnimal()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "5. IsHerbivore(): ";
  if (obj_wild_colibri.IsHerbivore()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "6. IsCarnivore(): ";
  if (obj_wild_colibri.IsCarnivore()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "7. IsOmnivore(): ";
  if (obj_wild_colibri.IsOmnivore()) {
    cout << "True" << endl;
  }
  else {
    cout << "False" << endl;
  }
  cout << "8. GetReqMeat(): " << obj_wild_colibri.GetReqMeat() << endl;
  cout << "9. GetReqPlant(): " << obj_wild_colibri.GetReqPlant() << endl;
  cout << "10. GetPosition(): ";
  P = obj_wild_colibri.GetPosition();
  cout << "(" << P.GetX() << "," << P.GetY() << ")" << endl;
  cout << "11. Move(1): " <<  "Move Up, new position: ";
  obj_wild_colibri.Move(1);
  P = obj_wild_colibri.GetPosition();
  cout << "(" << P.GetX() << "," << P.GetY() << ")" << endl;
  cout << "12. Move(2): " <<  "Move Right, new position: ";
  obj_wild_colibri.Move(2);
  P = obj_wild_colibri.GetPosition();
  cout << "(" << P.GetX() << "," << P.GetY() << ")" << endl;
  cout << "13. Move(3): " <<  "Move Down, new position: ";
  obj_wild_colibri.Move(3);
  P = obj_wild_colibri.GetPosition();
  cout << "(" << P.GetX() << "," << P.GetY() << ")" << endl;
  cout << "14. Move(4): " <<  "Move Left, new position: ";
  obj_wild_colibri.Move(4);
  P = obj_wild_colibri.GetPosition();
  cout << "(" << P.GetX() << "," << P.GetY() << ")" << endl;
  c = obj_wild_colibri.Render();
  cout << "15. Render(): " << c << endl;
  cout << "Wild animal special methods:" << endl;
  cout << "16. IsEnemy(1): ";
  if (obj_wild_colibri.IsEnemy(1)) {
    cout << "Enemy of ID=1 (Wolf)" << endl;
  }
  else {
    cout << "Not enemy of ID=1 (Wolf)" << endl;
  }
  cout << "17. IsEnemy(19): ";
  if (obj_wild_colibri.IsEnemy(19)) {
    cout << "Enemy of ID=19 (Colibri)" << endl;
  }
  else {
    cout << "Not enemy of ID=19 (Colibri)" << endl;
  }
  cout << "18. AddEnemy(1), IsEnemy(1): ";
  obj_wild_colibri.AddEnemy(1);
  if (obj_wild_colibri.IsEnemy(1)) {
    cout << "Enemy of ID=1 (Wolf)" << endl;
  }
  else {
    cout << "Not enemy of ID=1 (Wolf)" << endl;
  }
  cout << "19. RemoveEnemy(19), IsEnemy(19): ";
  obj_wild_colibri.RemoveEnemy(19);
  if (obj_wild_colibri.IsEnemy(19)) {
    cout << "Enemy of ID=19 (Colibri)" << endl;
  }
  else {
    cout << "Not enemy of ID=19 (Colibri)" << endl;
  }
  cout << endl << endl;
  return 0;
}