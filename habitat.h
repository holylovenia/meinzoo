#ifndef HABITAT_H
#define HABITAT_H

#include "cell.h"

class Habitat : public Cell {
	public:
		// ctor
		Habitat();
		// ctor with parameter
		Habitat(char type);
		// cctor
		Habitat(const Habitat& H);
		// operator=
		Habitat& operator=(Habitat& H);
		// dtor
		~Habitat();

	protected:
		char type;

	private:
		const char defType = 'L';
}

#endif