#ifndef ROAD_H
#define ROAD_H

#include "facility.h"

/** @class Road
	* Kelas Road mendefinisikan atribut untuk road.
	*/
class Road: public Facility {
	public:
		/** @brief Constructor
			* Menciptakan cell berisi road yang dapat/tidak dapat diakses.
			* @param Accessible Nilai true/false apakah dapat diakses.
			*/
		Road(bool Accessible);
		
		/** @brief Getter nilai isEntrance
			* @return Nilai isEntrance.
			*/
		bool IsEntrance();

		/** @brief Getter nilai isExit
			* @return Nilai isExit.
			*/
		bool IsExit();
		
		/** @brief Mengembalikan character untuk kelas render.
			* @return Karakter untuk dirender.
			*/
		char render() override;

	protected:
		bool isEntrance;
		bool isExit;

	private:
		const std::string defFacilityType;
		const bool defRoad;
};


#endif
