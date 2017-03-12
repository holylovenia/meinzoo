// file cage.h

#ifndef CAGE_H
#define CAGE_H

#include <set>
#include "../misc/point.h"

class Cage {
	public:
		// tidak perlu ctor dan dtor karena bitwise copy tidak apa-apa
		
		void AddPoint(const Point& p);
		
		void RemovePoint(const Point& p);
		
	private:
		set<Point> area;
};


#endif