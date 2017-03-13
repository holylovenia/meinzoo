#include "driver.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <ctime>
#include <cstdlib>

const string fname = "layout.in";

Driver::Driver() {
  InitZoo();
  
  int pil;
  do {
    if (system("CLS")) system("clear");
    do {
      cout << "---VIRTUAL ZOO---\n\n"
           << "1. Display Virtual Zoo\n"
           << "2. Tour Virtual Zoo\n"
           << "3. Jumlah Makanan Dikonsumsi\n"
           << "0. Keluar\n"
           << "Pilihan: ";
      cin >> pil;
    } while (pil < 0 || pil > 3);
    switch (pil) {
      case 1: DisplayZoo(); break;
      case 2: TourZoo(); break;
      case 3: ConsumedFood(); break;
    }
  } while (pil != 0);
}
void Driver::DisplayZoo() {
  if (system("CLS")) system("clear");
  cout << "---DISPLAY ZOO---\n\n";
  int ux, uy, lx, ly;
  cout << "Masukkan koordinat batas atas kiri (X Y): ";
  cin >> ux >> uy;
  cout << "Masukkan koordinat batas bawah kanan (X Y): ";
  cin >> lx >> ly;
  zoo.Render();
  zoo.Print(ux,uy,lx,ly);
  cin.get();
}
void Driver::TourZoo() {
  if (system("CLS")) system("clear");
  zoo.Tour();
}
void Driver::ConsumedFood() {
  if (system("CLS")) system("clear");
  cout << "---MAKANAN DIKONSUMSI---\n\n"
       << "Jumlah makanan yang dikonsumsi semua hewan dalam zoo setiap hari:\n"
       << "Daging:   " << zoo.GetTotalReqMeat() << '\n'
       << "Tumbuhan: " << zoo.GetTotalReqPlant() << '\n';
  cin.get();
  cin.get();
}
void Driver::InitZoo() {
  ifstream inf;
  inf.open(fname, ios::in);
  string instr;
  
  for (int i = 0; i < WIDTH; ++i) {        
    // Initialize cells
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
  
  // Initialize cage
  while (instr != "######") {
    Cage* c = new Cage(LAND);
    getline(inf,instr);
    while (instr[0] != '-') {
      int x, y;
      istringstream(instr) >> y >> x;      
      c->AddPoint(Point(x,y));
      getline(inf,instr);
    }
    getline(inf,instr);
    while (instr[0] != '#') {
      string species;
      int x, y, w;
      istringstream(instr) >> species >> y >> x >> w;
      Animal* a;
      if (species == "Wolf") {
        a = new Wolf(x,y,w);
      } else if (species == "Lion") {
        a = new Lion(x,y,w);
      } else if (species == "Tiger") {
        a = new Tiger(x,y,w);
      } else if (species == "Zebra") {
        a = new Zebra(x,y,w);
      } else if (species == "Monkey") {
        a = new Monkey(x,y,w);
      } else if (species == "Giraffe") {
        a = new Giraffe(x,y,w);
      } else if (species == "Elephant") {
        a = new Elephant(x,y,w);
      } else if (species == "Crocodile") {
        a = new Crocodile(x,y,w);
      } else if (species == "Python") {
        a = new Python(x,y,w);
      } else if (species == "Komodo") {
        a = new Komodo(x,y,w);
      } else if (species == "Iguana") {
        a = new Iguana(x,y,w);
      } else if (species == "Chameleon") {
        a = new Chameleon(x,y,w);
      } else if (species == "Shark") {
        a = new Shark(x,y,w);
      } else if (species == "Clownfish") {
        a = new Clownfish(x,y,w);
      } else if (species == "Barracuda") {
        a = new Barracuda(x,y,w);
      } else if (species == "Owl") {
        a = new Owl(x,y,w);
      } else if (species == "Eagle") {
        a = new Eagle(x,y,w);
      } else if (species == "Colibri") {
        a = new Colibri(x,y,w);
      } else if (species == "Peacock") {
        a = new Peacock(x,y,w);
      } else if (species == "Duck") {
        a = new Duck(x,y,w);
      } else if (species == "WildColibri") {
        a = new WildColibri(x,y,w);
      } else {
        //a = new WildBunny(x,y,w);
      }
      c->AddAnimal(*a);
      
      getline(inf,instr);
    }
    zoo.InsertCage(*c);
  }

  inf.close();
}