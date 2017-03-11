// File: animal_behavior.h

#ifndef ANIMAL_BEHAVIOR_H
#define ANIMAL_BEHAVIOR_H

class AnimalBehavior {
	public:
		bool getBehavior();
		virtual void setBehavior() = 0;

	protected:
		bool isWild;
};

#endif