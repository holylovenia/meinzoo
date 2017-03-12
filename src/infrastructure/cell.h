#ifndef CELL_H
#define CELL_H

class Cell {
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
