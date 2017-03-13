// file person.cpp

#include "person.h"

Person::Person() {
	setPosition(-1,-1);
}

Point Person::getPosition() const {
	return position;
}

void Person::setPosition(const Point& p) {
	position = p;
}

void Person::setPosition(int x, int y) {
	position.setX(x);
	position.setY(y);
}

char Person::render() {
	return 'i';
}

void Person::move(int movement) {
	if (movement == 1) { // Move up
		position.setY(position.getY()-1);
	} else if (movement == 2) { // Move right
		position.setX(position.getX()+1);
	} else if (movement == 3) { // Move down
		position.setY(position.getY()+1);
	} else { // Move left
		position.setX(position.getX()-1);
	}
}