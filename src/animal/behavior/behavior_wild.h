#ifndef BEHAVIOR_WILD_H
#define BEHAVIOR_WILD_H

#include "animal_behavior.h"

/** @class BehaviorWild
	* Kelas BehaviorWild mendefinisikan perilaku hewan liar.
	*/
class BehaviorWild : public AnimalBehavior {
	public:
		/** @brief Mengubah nilai perilaku hewan.
			* Menetapkan nilai perilaku hewan menjadi liar.
			*/
		void setBehavior();
};

#endif