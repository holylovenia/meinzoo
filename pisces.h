#ifndef PISCES_H
#define PISCES_H

#include "animal.h"

class Pisces: public Animal {
	public:
		// ctor
		Pisces();
		// cctor
		Pisces(Pisces& P);
		// operator=
		Pisces& operator=(Pisces& P);
		// dtor
		~Pisces();

	private:
		const string skinType = "Scale";
}

#endif