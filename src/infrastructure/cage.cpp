#include <ctime>
#include <random>
#include "cage.h"

Cage::Cage() {
	nbAnimal = 0;
}

void Cage::AddPoint(const Point& p) {
	area.insert(p);
}

void Cage::RemovePoint(const Point& p) {
	area.erase(p);
}

void Cage::AddAnimal(Animal& A) {
	if (nbAnimal < int(area.size() / 10 * 3)) {
		animal.push_back(&A);
		nbAnimal++;
	}
}

Animal* Cage::RemoveAnimal(int i) {
	if (i < animal.size()) {
		Animal* a = animal[i];
		animal.erase(animal.begin() + i - 1);
		nbAnimal--;
		return a;
	} else {
		return NULL;
	}
}

void Cage::MoveAnimal() {
	unsigned int seed = time(NULL);
	subtract_with_carry_engine<unsigned,24,10,24> generator (seed);	
	
	for (auto iter = animal.begin(); iter < animal.end(); ++iter) {
		char movement = generator() % 4;
		bool movement_in_cage = false;
		do {			
			(*iter)->Move(movement);
			
			movement_in_cage = area.find((*iter)->getPosition()) != area.end();
			if (!movement_in_cage) {
				movement = (movement + 2) % 4;
				(*iter)->Move(movement);
				movement = (movement + 3) % 4;
			}
		} while (!movement_in_cage);
	}
}