#ifndef MAMMALIA_H
#define MAMMALIA_H

#include "animal.h"

class Mammalia: public Animal {
	public:
		// ctor
		Mammalia();
		// cctor
		Mammalia(Mammalia& M);
		// operator=
		Mammalia& operator=(Mammalia& M);
		// dtor
		~Mammalia();

	private:
		const string skinType = "Hair";
}

#endif