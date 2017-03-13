#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "zoo.h"

Zoo::Zoo() {
  map = new Cell**[WIDTH];
  map_char = new char*[WIDTH];
  for (int i = 0; i < WIDTH; ++i) {
    map[i] = new Cell*[LENGTH];
    map_char[i] = new char[LENGTH];
    for (int j = 0; j < LENGTH; ++j) {
      map[i][j] = NULL;
      map_char[i][j] = ' ';
    }
  }
}
Zoo::~Zoo() {
  for (int i = 0; i < WIDTH; ++i) {
    delete [] map[i];
    delete [] map_char[i];
  }
  delete [] map;
  delete [] map_char;
}
void Zoo::SetTile(Cell* c, int i, int j) {
  map[i][j] = c;
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
    for (int j = 0; j < LENGTH; ++j) {
      map_char[i][j] = map[i][j]->Render();
    }
  }
  for (int i = 0; i < cages.size(); ++i) {
    for (auto &it: cages[i].GetArea()) {
      map_char[it.GetY()][it.GetX()] = toupper(map_char[it.GetY()][it.GetX()]);
    }
  }
  for (int i = 0; i < cages.size(); ++i) {
    for (auto &it: cages[i].GetAnimal()) {
      Point loc = it->GetPosition();
      map_char[loc.GetY()][loc.GetX()] = it->Render();
    }
  }
  Point loc = visitor.GetPosition();
  if (loc.GetX() >= 0 && loc.GetX() < LENGTH && loc.GetY() >= 0 && loc.GetY() < WIDTH)
    map_char[loc.GetY()][loc.GetX()] = visitor.Render();
}
void Zoo::Print(int ux, int uy, int lx, int ly) {
  for (int i = uy; i <= ly; ++i) {
    for (int j = ux; j <= lx; ++j) {
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
        if (r->IsEntrance()) {
          entrance.insert(Point(j,i));
        } else if (r->IsExit()) {
          exit.insert(Point(j,i));
        }
      }
    }
  }
}
Cell*** Zoo::GetMap() {
  return map;
}
set<Point>& Zoo::GetEntrance() {
  return entrance;
}
set<Point>& Zoo::GetExit() {
  return exit;
}
vector<Cage>& Zoo::GetCages() {
  return cages;
}
void Zoo::Tour() {
  // Matrix of visited
  bool visited[WIDTH][LENGTH];
  for (int i = 0; i < WIDTH; ++i) {
    for (int j = 0; j < LENGTH; ++j) {
      visited[i][j] = !(map[i][j]->IsAccessible());
    }
  }
  ListAllEntranceExit();

  // Choose entrance
  srand(time(NULL));
  auto it = entrance.begin();
  advance(it, rand() % entrance.size());
  Point loc = *it;
  visitor.SetPosition(loc);
  visited[loc.GetY()][loc.GetX()] = true;

  bool on_exit, no_more_moves = false;
  do {
    // Output map
    if (system("CLS")) system("clear");
    cout << "---TOUR ZOO---\n\n";
    Render();
    Print();

    // Interact
    for (auto &it: cages) {
      bool adjacent = it.GetArea().count(loc.Up()) + it.GetArea().count(loc.Down()) +
                      it.GetArea().count(loc.Left()) + it.GetArea().count(loc.Right()) > 0;
      if (adjacent) {
        cout << '\n';
        for (int j = 0; j < it.GetAnimal().size(); ++j) {
          it.GetAnimal()[j]->Interact();
        }
      }
    }
    cin.get();

    on_exit = exit.find(visitor.GetPosition()) != exit.end();
    if (!on_exit) {
      // Move
      srand(time(NULL));
      char movement = rand() * rand() % 4;
      bool movement_in_range;
      int no_of_tries = 0;
      do {
        visitor.Move(movement);
        loc = visitor.GetPosition();
        movement_in_range = (visited[loc.GetY()][loc.GetX()] == false &&
                              loc.GetY() >= 0 && loc.GetY() < WIDTH &&
                              loc.GetX() >= 0 && loc.GetX() < LENGTH);
        if (!movement_in_range) {
          if (no_of_tries < 4) {
            movement = (movement + 2) % 4;
            visitor.Move(movement);
            movement = (movement + 3) % 4;
            no_of_tries++;
          } else {
            no_more_moves = true;
          }
        } else {
          visited[loc.GetY()][loc.GetX()] = true;
        }
      } while (!movement_in_range && !no_more_moves);

      // Move animals
      for (auto &it: cages) {
        it.MoveAnimal();
      }
    }
  } while (!on_exit && !no_more_moves);

  if (on_exit) {
    cout << "\nPengunjung keluar dari pintu keluar\n";
  } else {
    cout << "\nPengunjung tidak dapat bergerak lagi\n";
  }
  cin.get();

  // Reset visitor
  visitor.ResetPosition();
}