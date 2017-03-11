#include "cell.h"

// ctor
Cell::Cell(int _x, int _y, bool Accessible)
{
	Location.setX(_x);
	Location.setY(_y);
	isAccessible = Accessible;
}
// cctor
Cell::Cell(Cell& C)
{
	Location.setX(C.Location.getX());
	Location.setY(C.Location.getY());
	isAccessible = C.isAccessible;
}
// operator=
Cell& Cell::operator=(Cell& C)
{
	Location.setX(C.Location.getX());
	Location.setY(C.Location.getY());
	isAccessible = C.isAccessible;
	return *this;
}

void Cell::setPosition (int _x, int _y)
{
	Location.setX(_x);
	Location.setY(_y);		
}
void Cell::getPosition (int& _x, int& _y)
{
	_x = Location.getX();
	_y = Location.getY();
}