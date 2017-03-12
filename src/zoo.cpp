//file zoo.cpp

#include <cctype>
#include "zoo.h"
#include "animal/diet/animal_diet.h"

Zoo::Zoo() {
	// Hardcode di sini
	
}

void Zoo::setTile(Cell& c, int i, int j) {
	map[i][j] = &c;
}

void Zoo::render() {
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
			int x = (animal[j]->getPosition()).getX();
			int y = (animal[j]->getPosition()).getY();
			mapchar[y][x] = animal[j]->render();
		}
	}
}

void Zoo::print() {
	for (int i = 0; i < WIDTH; ++i) {
		for (int j = 0; j < LENGTH; ++j) {
			cout << mapchar[i][j] << ' ';
		}
		cout << '\n\n';
	}
}

void Zoo::getTotalReqMeat() {
	return AnimalDiet::getTotalMeat();
}

void Zoo::getTotalReqPlant() {
	return AnimalDiet::getTotalReqPlant();
}