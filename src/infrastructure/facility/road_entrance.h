#ifndef ROAD_ENTRANCE_H
#define ROAD_ENTRANCE_H

#include "road.h"

/** @class RoadEntrance
	* Kelas RoadEntrance mendefinisikan atribut untuk road entrance.
	*/
class RoadEntrance: public Road {
	public:
		/** @brief Constructor
			* Mendefinisikan road entrance.
			* @param Accessible Nilai true/false apakah dapat diakses.
			*/
		RoadEntrance(bool Accessible);

	private:
		const bool defRoadEntrance;
};


#endif
