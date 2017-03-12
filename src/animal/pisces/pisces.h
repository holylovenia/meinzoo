#ifndef PISCES_H
#define PISCES_H

#include "../animal.h"

/** @class Pisces
	* Kelas Pisces mendefinisikan atribut untuk pisces
	*/
class Pisces: public Animal {
	public:
		/** @brief Constructor
			* Menciptakan Pisces dengan atribut default untuk pisces pada umumnya.
			*/
		Pisces();

	private:
		const int defLimbCount;
		const std::string defSkinType;
};

#endif