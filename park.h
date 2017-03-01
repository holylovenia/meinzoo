#ifndef PARK_H
#define PARK_H

#include "facility.h"

class Park: public Facility {
	public:
		// ctor with parameter
		Park(string name);
		// cctor
		Park(Park& P);
		// operator=
		Park& operator=(Park& P);
		// dtor
		~Park();

	protected:
		string facilityType = "Park";

	private:
		string name;
}


#endif