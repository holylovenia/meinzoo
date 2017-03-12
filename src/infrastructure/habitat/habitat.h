#ifndef HABITAT_H
#define HABITAT_H

#include "../cell.h"

class Habitat: public Cell {
	public:
		Habitat();
		
	protected:
		char type;

	private:
		const bool defAccessible;
};

#endif
