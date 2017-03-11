#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
	public:
		// ctor
		Animal();
		// ctor with parameter
		Animal(bool _wild);
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
		const bool defWild;
};

#endif