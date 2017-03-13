#ifndef CELL_H
#define CELL_H

#include "../misc/renderable.h"

class Cell: public Renderable {
	public:
		// ctor
		Cell(bool Accessible);
		// cctor
		Cell(Cell& C);
		// operator=
		Cell& operator=(Cell& C);

	protected:
		bool isAccessible;
};


#endif
