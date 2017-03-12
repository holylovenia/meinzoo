// file zoo.h

#ifndef ZOO_H
#define ZOO_H

#include <vector>
#include "infrastructure/cell.h"
#include "infrastructure/cage.h"

const int WIDTH = 20;
const int LENGTH = 20;

class Zoo {
	public:
		Zoo();
		
		void setTile(Cell& c, int i, int j);		
		
		void render();		
		void print();
		
		void getTotalReqMeat();
		void getTotalReqPlant();
	
	private:
		Cell* map[WIDTH][LENGTH];
		char mapchar[WIDTH][LENGTH];
		vector<Cage> cages;
};

#endif