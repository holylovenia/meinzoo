#include "driver.h"
#include <cstdio>

Driver::Driver() {
  printf("1\n");
  getchar();
  InitZoo();
  printf("2\n");
  getchar();
  zoo.Print();
  printf("3\n");
  getchar();
}
void Driver::InitZoo() {  
  for (int i = 0; i < WIDTH; ++i) {
    for (int j = 0; j < LENGTH; ++j) {
      zoo.SetTile(new Road(true),i,j);
    }
  }
}