// cage.cpp

#include <ctime>
#include <cstdlib>
#include "cage.h"
#include "../animal/behavior/behavior_wild.h"
#include "../animal/diet/animal_diet.h"

Cage::Cage(int _type): type(_type) {
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
		AnimalBehavior* a = dynamic_cast<AnimalBehavior*>(&A);		
		bool placeable;
		
		if (!(a->getBehavior())) {
			BehaviorWild* b = dynamic_cast<BehaviorWild*>(a);
			for (int i = 0; i < animal.size() && placeable; ++i) {
				placeable = !(b->isEnemy(animal[i]->getID()));
			}
		} else {
			placeable = true;
		}
		if (placeable) {
			animal.push_back(&A);
			nbAnimal++;
		}
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
	srand(time(NULL));	
	for (int i = 0; i < animal.size(); ++i) {
		char movement = rand() % 4;
		bool movement_in_cage;
		int no_of_tries = 0;
		do {			
			animal[i]->Move(movement);			
			movement_in_cage = area.find(animal[i]->getPosition()) != area.end();
			if (!movement_in_cage) {
				movement = (movement + 2) % 4;
				animal[i]->Move(movement);
				movement = (movement + 3) % 4;
				no_of_tries++;
			}
		} while (!movement_in_cage && no_of_tries < 4);
	}
}

vector<Point> Cage::GetArea() {
	return vector<Point>(area.begin(), area.end());
}

vector<Animal*> Cage::GetAnimal() {
	return animal;
}