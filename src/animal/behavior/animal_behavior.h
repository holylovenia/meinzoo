#ifndef ANIMAL_BEHAVIOR_H
#define ANIMAL_BEHAVIOR_H

/** @class AnimalBehavior
	* Kelas abstrak AnimalBehavior menentukan perilaku hewan.
	*/
class AnimalBehavior {
	public:
		/** @brief Getter nilai isWild. 
			* @return nilai isWild.
			*/
		bool getBehavior();

		/** @brief Pure virtual method
			* Menetapkan nilai perilaku hewan.
			*/
		virtual void setBehavior() = 0;

	protected:
		bool isWild;
};

#endif