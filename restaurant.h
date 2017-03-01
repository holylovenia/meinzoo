#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "facility.h"

class Restaurant: public Facility {
	public:
		// ctor with parameter
		Restaurant(string name);
		// cctor
		Restaurant(Restaurant& R);
		// operator=
		Restaurant& operator=(Restaurant& R);
		// dtor
		~Restaurant();

	protected:
		string facilityType = "Restaurant";

	private:
		string name;
}


#endif