#ifndef REPTILE_H
#define REPTILE_H

#include "animal.h"

class Reptilia: public Animal {
	public:
		// ctor
		Reptilia();
		// cctor
		Reptilia(Reptilia& R);
		// operator=
		Reptilia& operator=(Reptilia& R);
		// dtor
		~Reptilia();

	private:
		const string skinType = "Scale";
}

#endif