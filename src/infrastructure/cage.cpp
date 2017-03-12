#include "cage.h"

void AddPoint(const Point& p) {
	area.insert(p);
}

void RemovePoint(const Point& p) {
	area.erase(p);
}