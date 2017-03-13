//file zoo.cpp

#include <cctype>
#include <cstdlib>
#include <ctime>
#include "zoo.h"
#include "animal/diet/animal_diet.h"
#include "misc/point.h"
#include "infrastructure/facility/road.h"

Zoo::Zoo() {

}
void Zoo::SetTile(Cell& c, int i, int j) {
  map[i][j] = &c;
}
Cell& Zoo::GetTile(int i, int j) {
  return *map[i][j];
}
void Zoo::InsertCage(const Cage& c) {
  cages.push_back(c);
}
Cage Zoo::RemoveCage(int i) {
  if (i < cages.size()) {
    Cage c = cages[i];
    cages.erase(cages.begin() + i);
    return c;
  }
}
void Zoo::Render() {
  for (int i = 0; i < WIDTH; ++i) {
    for (int j = 0; i < LENGTH; ++i) {
      map_char[i][j] = map[i][j]->Render();
    }
  }
  for (int i = 0; i < cages.size(); ++i) {
    vector<Point> area(cages[i].GetArea().begin(), cages[i].GetArea().end());
    for (int j = 0; j < area.size(); ++j) {
      map_char[area[j].GetY()][area[j].GetX()] = toupper(map_char[area[j].GetY()][area[j].GetX()]);
    }
  }
  for (int i = 0; i < cages.size(); ++i) {
    vector<Animal*> animal = cages[i].GetAnimal();
    for (int j = 0; j < animal.size(); ++j) {
      int x = (animal[j]->GetPosition()).GetX();
      int y = (animal[j]->GetPosition()).GetY();
      map_char[y][x] = animal[j]->Render();
    }
  }
  Point loc = visitor.GetPosition();
  map_char[loc.GetY()][loc.GetX()] = visitor.Render();
}
void Zoo::Print(int ux, int uy, int lx, int ly) {
  for (int i = uy; i <= ly; ++i) {
    for (int j = ux; j < lx; ++j) {
      cout << map_char[i][j];
    }
    cout << '\n';
  }
}

int Zoo::GetTotalReqMeat() {
  return AnimalDiet::GetTotalMeat();
}

int Zoo::GetTotalReqPlant() {
  return AnimalDiet::GetTotalPlant();
}

void Zoo::ListAllEntranceExit() {
  for (int i = 0; i < WIDTH; ++i) {
    for (int j = 0; j < LENGTH; ++j) {
      if (Road* r = dynamic_cast<Road*>(map[i][j])) {
        if (r->IsEntrance())
          entrance.insert(Point(j,i));
        else if (r->IsExit())
          exit.insert(Point(j,i));
      }
    }
  }
}

void Zoo::Tour() {
  // Matrix of visited
  bool visited[WIDTH][LENGTH];
  for (int i = 0; i < WIDTH; ++i) {
    for (int j = 0; j < LENGTH; ++j) {
      if (Road* r = dynamic_cast<Road*>(map[i][j])) {
        visited[i][j] = false;
      } else {
        visited[i][j] = true;
      }
    }
  }

  // Choose entrance
  srand(time(NULL));
  auto it = entrance.begin();
  advance(it, rand() % entrance.size());
  Point loc = *it;
  visitor.SetPosition(loc);
  visited[loc.GetY()][loc.GetX()] = true;

  // Output map
  Print();
  cin.get();

  while (exit.find(visitor.GetPosition()) != exit.end()) {
    // Move
    char movement = rand() % 4;
    bool movement_in_range;
    int no_of_tries = 0;
    do {
      visitor.Move(movement);
      loc = visitor.GetPosition();
      movement_in_range = (visited[loc.GetY()][loc.GetX()] == false);
      if (!movement_in_range) {
        movement = (movement + 2) % 4;
        visitor.Move(movement);
        movement = (movement + 3) % 4;
        no_of_tries++;
      } else {
        visited[loc.GetY()][loc.GetX()] = true;
      }
    } while (!movement_in_range && no_of_tries < 4);

    // Output map
    Print();

    // Interact
    for (int i = 0; i < cages.size(); ++i) {
      bool adjacent = cages[i].GetArea().find(loc.Up()) != cages[i].GetArea().end();
      if (!adjacent)
        adjacent = cages[i].GetArea().find(loc.Down()) != cages[i].GetArea().end();
      if (!adjacent)
        adjacent = cages[i].GetArea().find(loc.Left()) != cages[i].GetArea().end();
      if (!adjacent)
        adjacent = cages[i].GetArea().find(loc.Right()) != cages[i].GetArea().end();

      if (adjacent) {
        for (int j = 0; j < cages[i].GetAnimal().size(); ++i) {
          cages[i].GetAnimal()[j]->Interact();
        }
      }
    }

    // Wait for input
    cin.get();
  }

  // Reset visitor
  visitor.SetPosition(-1,-1);
}