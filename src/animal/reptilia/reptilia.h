#ifndef REPTILIA_H
#define REPTILIA_H

#include "../animal.h"

/** @class Reptilia
	* Kelas Reptilia mendefinisikan atribut untuk reptilia.
	*/
class Reptilia: public Animal {
	public:
		/** @brief Constructor
			* Menciptakan Reptilia dengan atribut default untuk reptilia pada umumnya.
			*/
		Reptilia();

	private:
		const int defLimbCount;
		const std::string defSkinType;
};

#endif
