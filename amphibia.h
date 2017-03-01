#ifndef AMPHIBIA_H
#define AMPHIBIA_H

#include "animal.h"

class Amphibia: public Animal {
	public:
		// ctor
		Amphibia();
		// cctor
		Amphibia(Amphibia& A);
		// operator=
		Amphibia& operator=(Amphibia& A);
		// dtor
		~Amphibia();

	private:
		const string skinType = "Mucus";
}

#endif