#ifndef FACILITY_H
#define FACILITY_H

#include <string>
#include "../cell.h"

class Facility: public Cell {
	public:
		// ctor
		Facility(bool Accessible);

	protected:
		std::string facilityType;
};

#endif
