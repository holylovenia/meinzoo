#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
	public:
		// ctor
		Animal();
		// ctor with parameter
		Animal(boolean wild, int limbCount, int weight);
		// cctor
		Animal(const Animal& A);
		// operator=
		Animal& operator=(Animal& A);
		// dtor
		~Animal();
		// others
		virtual void Interact();

	protected:
		bool wild;
		int limbCount;
		int weight;
		string skinType;

	private:
		const int defLimbCount = 4;
		const int defWeight = 60;
		const bool defWild = false;
		const string defSkinType = "Hair";
}

#endif