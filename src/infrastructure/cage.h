// file cage.h

#ifndef CAGE_H
#define CAGE_H

#include <set>
#include <vector>
#include "../misc/point.h"
#include "../animal/animal.h"

using namespace std;

class Cage {
	public:
		Cage();
		
		void AddPoint(const Point& p);
		void RemovePoint(const Point& p);
		
		void AddAnimal(Animal& A);
		Animal* RemoveAnimal(int i);
		
		void MoveAnimal();
		
	private:
		set<Point> area;
		vector<Animal*> animal;
		int nbAnimal;
};

#endif