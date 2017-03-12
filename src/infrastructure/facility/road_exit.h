#ifndef ROAD_EXIT_H
#define ROAD_EXIT_H

#include "road.h"

/** @class RoadExit
	* Kelas RoadExit mendefinisikan atribut untuk road exit.
	*/
class RoadExit: public Road {
	public:
		/** @brief Constructor
			* 
			* @param Accesible Nilai true/false apakah dapat diakses.
			*/
		RoadExit(bool Accessible);

	private:
		const bool defRoadExit;
};


#endif
