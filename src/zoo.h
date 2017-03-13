#ifndef ZOO_H
#define ZOO_H

#include <set>
#include <vector>
#include "animal/diet/animal_diet.h"
#include "infrastructure/cage.h"
#include "infrastructure/cell.h"
#include "infrastructure/facility/road.h"
#include "infrastructure/facility/road_entrance.h"
#include "infrastructure/facility/road_exit.h"
#include "infrastructure/facility/park.h"
#include "infrastructure/facility/restaurant.h"
#include "infrastructure/habitat/water_habitat.h"
#include "infrastructure/habitat/air_habitat.h"
#include "infrastructure/habitat/land_habitat.h"
#include "infrastructure/habitat/habitat.h"
#include "misc/person.h"
#include "misc/point.h"

const int WIDTH = 20;
const int LENGTH = 20;

class Zoo {
  public:
    Zoo();
    ~Zoo();
    void SetTile(Cell* c, int i, int j);
    Cell& GetTile(int i, int j);
    void InsertCage(const Cage& c);
    Cage RemoveCage(int i);
    void Render();
    void Print(int ux = 0, int uy = 0, int lx = LENGTH - 1, int ly = WIDTH - 1);
    int GetTotalReqMeat();
    int GetTotalReqPlant();
    void ListAllEntranceExit();
    void Tour();

  private:
    Cell*** map;
    char** map_char;
    vector<Cage> cages;
    Person visitor;
    set<Point> entrance;
    set<Point> exit;
};

#endif