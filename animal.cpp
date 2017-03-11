// File: animal.cpp


#include "animal.h"


// ctor
Animal::Animal(): defWild(false)
{
	wild = defWild;
}

// ctor with parameter
Animal::Animal(bool _wild): defWild(false)
{
	wild = _wild;
}

// cctor
Animal::Animal(const Animal& A): defWild(false)
{
	wild = A.wild;
}

// operator=
Animal& Animal::operator=(Animal& A)
{
	wild = A.wild;
	return(*this);
}

// dtor
Animal::~Animal() {}