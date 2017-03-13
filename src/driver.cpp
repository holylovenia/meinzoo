// file driver.cpp

#include "driver.h"

Driver::Driver() {
  InitZoo();
  zoo.Print();
}
void Driver::InitZoo() {
  for (int i = 0; i < WIDTH; ++i) {
    for (int j = 0; j < LENGTH; ++j) {
      zoo.SetTile(new Road(true),i,j);
    }
  }
}