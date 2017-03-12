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

void Zoo::setTile(Cell& c, int i, int j) {
	map[i][j] = &c;
}

Cell& Zoo::getTile(int i, int j) {
	return *map[i][j];
}

void Zoo::insertCage(const Cage& c) {
	cages.push_back(c);
}

Cage Zoo::removeCage(int i) {
	if (i < cages.size()) {
		Cage c = cages[i];
		cages.erase(cages.begin() + i);
		return c;
	}
}

void Zoo::render() {
	for (int i = 0; i < WIDTH; ++i) {
		for (int j = 0; i < LENGTH; ++i) {
			mapchar[i][j] = map[i][j]->render();
		}
	}	
	for (int i = 0; i < cages.size(); ++i) {
		vector<Point> area(cages[i].GetArea().begin(), cages[i].GetArea().end());
		for (int j = 0; j < area.size(); ++j) {
			mapchar[area[j].getY()][area[j].getX()] = toupper(mapchar[area[j].getY()][area[j].getX()]);
		}
	}	
	for (int i = 0; i < cages.size(); ++i) {
		vector<Animal*> animal = cages[i].GetAnimal();
		for (int j = 0; j < animal.size(); ++j) {
			int x = (animal[j]->getPosition()).getX();
			int y = (animal[j]->getPosition()).getY();
			mapchar[y][x] = animal[j]->render();
		}
	}
	Point loc = visitor.getPosition();
	mapchar[loc.getY()][loc.getX()] = visitor.render();
}

void Zoo::print(int ux, int uy, int lx, int ly) {
	for (int i = uy; i <= ly; ++i) {
		for (int j = ux; j < lx; ++j) {
			cout << mapchar[i][j];
		}
		cout << '\n';
	}
}

int Zoo::getTotalReqMeat() {
	return AnimalDiet::getTotalMeat();
}

int Zoo::getTotalReqPlant() {
	return AnimalDiet::getTotalPlant();
}

void Zoo::listAllEntranceExit() {
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

void Zoo::tour() {
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
	visitor.setPosition(loc);
	visited[loc.getY()][loc.getX()] = true;
	
	print();
	cin.get();
	
	while (exit.find(visitor.getPosition()) != exit.end()) {
		// Move
		char movement = rand() % 4;
		bool movement_in_range;
		int no_of_tries = 0;
		do {
			visitor.move(movement);
			loc = visitor.getPosition();
			movement_in_range = (visited[loc.getY()][loc.getX()] == false);
			if (!movement_in_range) {
				movement = (movement + 2) % 4;
				visitor.move(movement);
				movement = (movement + 3) % 4;
				no_of_tries++;
			} else {
				visited[loc.getY()][loc.getX()] = true;
			}
		} while (!movement_in_range && no_of_tries < 4);
		
		print();
		
		// Interact
		for (int i = 0; i < cages.size(); ++i) {
			bool adjacent = cages[i].GetArea().find(loc.up()) != cages[i].GetArea().end();
			if (!adjacent) adjacent = cages[i].GetArea().find(loc.down()) != cages[i].GetArea().end();
			if (!adjacent) adjacent = cages[i].GetArea().find(loc.left()) != cages[i].GetArea().end();
			if (!adjacent) adjacent = cages[i].GetArea().find(loc.right()) != cages[i].GetArea().end();
			
			if (adjacent) {
				for (int j = 0; j < cages[i].GetAnimal().size(); ++i) {
					cages[i].GetAnimal()[j]->Interact();
				}
			}
		}
		
		cin.get();
	}
	
}