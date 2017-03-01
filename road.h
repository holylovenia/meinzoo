#ifndef ROAD_H
#define ROAD_H

class Road {
	public:
		// ctor
		Road();
		// ctor with parameter
		Road(bool _entrance, bool _exit);
		// cctor
		Road(Road& R);
		// operator=
		Road& operator=(Road& R);
		// dtor
		~Road();

	protected:
		bool isEntrance;
		bool isExit;

	private:
		const bool defIsEntrance = false;
		const bool defIsExit = false;
}


#endif