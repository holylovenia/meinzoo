// file zoo.h

#ifndef ZOO_H
#define ZOO_H

#include "infrastructure/cell.h"


const int WIDTH = 20;
const int LENGTH = 20;

class Zoo {
	public:
		Zoo();
	
	private:
		Cell* Overworld[WIDTH][LENGTH];
}

#endif