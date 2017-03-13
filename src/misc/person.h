// file person.h

#ifndef PERSON_H
#define PERSON_H

#include "point.h"
#include "renderable.h"

class Person: public Renderable {
	public:	
		Person();
		Point getPosition() const;
		void setPosition(const Point& p);
		void setPosition(int x, int y);
		
		char render();
		void move(int movement);
			
	private:
		Point position;
};

#endif