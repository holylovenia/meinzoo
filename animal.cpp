// File: animal.cpp


#include "animal.h"


// ctor
Animal::Animal(): defLimbCount(4), defWeight(60), defWild(false), defSkinType("Hair")
{
	wild = defWild;
	limbCount = defLimbCount;
	weight = defWeight;
	skinType = defSkinType;
}

// ctor with parameter
Animal::Animal(bool _wild, int _limbCount, int _weight, std::string _skinType): defLimbCount(4), defWeight(60), defWild(false), defSkinType("Hair")
{
	wild = _wild;
	limbCount = _limbCount;
	weight = _weight;
	skinType = _skinType;
}

// cctor
Animal::Animal(const Animal& A): defLimbCount(4), defWeight(60), defWild(false), defSkinType("Hair")
{
	wild = A.wild;
	limbCount = A.limbCount;
	weight = A.weight;
	skinType = A.skinType;
}

// operator=
Animal& Animal::operator=(Animal& A)
{
	wild = A.wild;
	limbCount = A.limbCount;
	weight = A.weight;
	skinType = A.skinType;
	return(*this);
}

// dtor
Animal::~Animal() {}