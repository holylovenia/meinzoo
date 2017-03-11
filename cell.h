#ifndef CELL_H
#define CELL_H

class Cell {
	public:
		// ctor
		Cell(int _x, int _y);
		// cctor
		Cell(Cell& C);
		// operator=
		Cell& operator=(Cell& C);
		// dtor
		~Cell();

		void setPosition (int _x, int _y);
		void getPosition (int& _x, int& _y);

	protected:
		unsigned int x;
		unsigned int y;
		bool isAccessible;

	private:

};


#endif
