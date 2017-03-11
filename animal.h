#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
	public:
		// ctor
		Animal();
		// ctor with parameter
		Animal(bool _wild, int _limbCount, int _weight, std::string _skinType);
		// cctor
		Animal(const Animal& A);
		// operator=
		Animal& operator=(Animal& A);
		// dtor
		~Animal();
		// others
		virtual void Interact() = 0;

	protected:
		bool wild;
		int limbCount;
		int weight;
		std::string skinType;

	private:
		const int defLimbCount;
		const int defWeight;
		const bool defWild;
		const std::string defSkinType;
};

#endif