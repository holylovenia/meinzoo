//file zoo.cpp

#include <cctype>
#include "zoo.h"

Zoo::Zoo() {
	// Hardcode di sini
	
}

void Zoo::SetTile(const Cell& c, int i, int j) {
	map[i][j] = &c;
}

void Zoo::Render() {
	char mapchar[WIDTH][LENGTH];
	for (int i = 0; i < WIDTH; ++i) {
		for (int j = 0; i < LENGTH; ++i) {
			mapchar[i][j] = map[i][j]->render();
		}
	}
	
	for (int i = 0; i < cages.size(); ++i) {
		vector<Point> area = cages[i].GetArea();
		for (int j = 0; j < area.size(); ++j) {
			mapchar[area[j].getY()][area[j].getX()] = toupper(mapchar[area[j].getY()][area[j].getX()]);
		}
	}
	
	for (int i = 0; i < cages.size(); ++i) {
		vector<Animal*> animal = cages[i].GetAnimal();
		for (int j = 0; j < animal.size(); ++j) {
			Point x = animal[j]->getPosition().getX();
			Point y = animal[j]->getPosition().getY();
			mapchar[y][x] = animal[j]->render();
		}
	}
}

void Zoo::Print() {
	for (int i = 0; i < WIDTH; ++i) {
		for (int j = 0; j < LENGTH; ++j) {
			cout << mapchar[y][x] << ' ';
		}
		cout << '\n';
	}
}