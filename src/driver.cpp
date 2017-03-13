#include "driver.h"
#include <iostream>
#include <fstream>
#include <string>

const string fname = "layout.in";

Driver::Driver() {
  InitZoo();
  zoo.Render();
  zoo.Print();
}
void Driver::InitZoo() {
  ifstream inf;
  inf.open(fname, ios::in);
  
  for (int i = 0; i < WIDTH; ++i) {
    string instr;
    getline(inf, instr);
    for (int j = 0; j < LENGTH; ++j) {
      switch (instr[j]) {
        case 'w':
          zoo.SetTile(new WaterHabitat(),i,j); break;
        case 'l':
          zoo.SetTile(new LandHabitat(),i,j); break;
        case 'a':
          zoo.SetTile(new AirHabitat(),i,j); break;
        case '.':
          zoo.SetTile(new Road(true),i,j); break;
        case '>':
          zoo.SetTile(new RoadEntrance(true),i,j); break;
        case '<':
          zoo.SetTile(new RoadExit(true),i,j); break;
        case '*':
          zoo.SetTile(new Park(false,""),i,j); break;
        case 'R':
          zoo.SetTile(new Restaurant(false,""),i,j); break;
      }
    }
  }
  
  inf.close();
}