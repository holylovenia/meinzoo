// file zoo.h

#ifndef ZOO_H
#define ZOO_H

#include <set>
#include <vector>
#include "infrastructure/cell.h"
#include "infrastructure/cage.h"
#include "misc/person.h"

const int WIDTH = 20;
const int LENGTH = 20;

class Zoo {
	public:
		Zoo();
		
		void setTile(Cell& c, int i, int j);
		Cell& getTile(int i, int j);
		
		void insertCage(const Cage& c);
		Cage removeCage(int i);
		
		void render();		
		void print(int ux = 0, int uy = 0, int lx = LENGTH, int ly = WIDTH);
		
		int getTotalReqMeat();
		int getTotalReqPlant();
		
		void listAllEntranceExit();
		
		void tour();
	
	private:
		Cell* map[WIDTH][LENGTH];
		char mapchar[WIDTH][LENGTH];
		vector<Cage> cages;
		Person visitor;
		
		set<Point> entrance;
		set<Point> exit;
};

#endif