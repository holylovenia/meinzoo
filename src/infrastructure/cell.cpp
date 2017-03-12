#include "cell.h"

// ctor
Cell::Cell(bool Accessible)
{
	isAccessible = Accessible;
}
// cctor
Cell::Cell(Cell& C)
{
	isAccessible = C.isAccessible;
}
// operator=
Cell& Cell::operator=(Cell& C)
{
	isAccessible = C.isAccessible;
	return *this;
}