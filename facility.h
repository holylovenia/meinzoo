#ifndef FACILITY_H
#define FACILITY_H

#include <string>
#include "cell.h"

class Facility: public Cell {
	public:
		// ctor
		Facility();
		// ctor with parameter
		Facility(string _type);
		// cctor
		Facility(Facility& F);
		// operator=
		Facility& operator=(Facility& F);
		// dtor
		~Facility();

	protected:
		string facilityType;

	private:
		const string defFaciltyType = "Road";
}

#endif