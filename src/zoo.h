// file zoo.h

#ifndef ZOO_H
#define ZOO_H

#include <set>
#include <vector>
#include "infrastructure/cell.h"
#include "infrastructure/cage.h"
#include "misc/person.h"

const int WIDTH = 20;
const int LENGTH = 20;

class Zoo {
  public:
    Zoo();
    void SetTile(Cell& c, int i, int j);
    Cell& GetTile(int i, int j);
    void InsertCage(const Cage& c);
    Cage RemoveCage(int i);
    void Render();
    void Print(int ux = 0, int uy = 0, int lx = LENGTH, int ly = WIDTH);
    int GetTotalReqMeat();
    int GetTotalReqPlant();
    void ListAllEntranceExit();
    void Tour();

  private:
    Cell* map[WIDTH][LENGTH];
    char map_char[WIDTH][LENGTH];
    vector<Cage> cages;
    Person visitor;
    set<Point> entrance;
    set<Point> exit;
};

#endif