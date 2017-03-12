// file cage.h

#ifndef CAGE_H
#define CAGE_H

#include <set>
#include "../misc/point.h"

using namespace std;

class Cage {
	public:
		// tidak perlu ctor dan dtor karena bitwise copy tidak apa-apa
		
		void AddPoint(Point& p);
		void RemovePoint(Point& p);
		
	private:
		set<Point> area;
};

void Cage::AddPoint(Point& p) {
	area.insert(p);
}

void Cage::RemovePoint(Point& p) {
	//area.erase(p);
}

#endif