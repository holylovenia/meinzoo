// file cage.h

#ifndef CAGE_H
#define CAGE_H

#include <set>
#include <vector>
#include "../misc/point.h"
#include "../animal/animal.h"

#define LAND	0
#define WATER	1
#define	AIR		2

using namespace std;

class Cage {
	public:
		// 0: land, 1: water, 2: air
		Cage(int _type = LAND);
		
		void AddPoint(const Point& p);
		void RemovePoint(const Point& p);
		
		void AddAnimal(Animal& A);
		Animal* RemoveAnimal(int i);
		
		void MoveAnimal();
		
		vector<Point> GetArea();
		vector<Animal*> GetAnimal();
		
	private:
		int type;
		set<Point> area;
		vector<Animal*> animal;
		int nbAnimal;
};

#endif