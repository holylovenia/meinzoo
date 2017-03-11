#ifndef AVES_H
#define AVES_H

#include "animal.h"

class Aves: public Animal {
	public:
		// ctor
		Aves();
		// cctor
		Aves(Aves& A);
		// operator=
		Aves& operator=(Aves& A);
		// dtor
		~Aves();

	private:
		const int defLimbCount;
		const int defWeight;
		const std::string defSkinType;
}

#endif