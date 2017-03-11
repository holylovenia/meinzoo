#ifndef CELL_H
#define CELL_H
#include "point.h"

class Cell {
	public:
		// ctor
		Cell(int _x, int _y, bool Accessible);
		// cctor
		Cell(Cell& C);
		// operator=
		Cell& operator=(Cell& C);

		void setPosition (int _x, int _y);
		void getPosition (int& _x, int& _y);

	protected:
		Point Location;
		bool isAccessible;

	private:

};


#endif
