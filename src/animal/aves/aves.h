#ifndef AVES_H
#define AVES_H

#include "../animal.h"

/** @class Aves
	* Kelas Aves mendefinisikan atribut untuk aves.
	*/
class Aves: public Animal {
	public:
		/** @brief Constructor
			* Menciptakan Aves dengan atribut default untuk aves pada umumnya.
			*/
		Aves();

	private:
		const int defLimbCount;
		const std::string defSkinType;
};

#endif