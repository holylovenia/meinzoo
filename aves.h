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
		const string skinType = "Feather";
}

#endif