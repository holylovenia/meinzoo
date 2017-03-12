#include "animal.h"

void Animal::Move(int movement) {
	if (movement == 1) // Move up
	{
		position.setY(position.getY()-1);
	}
	else if (movement == 2) // Move right
	{
		position.setX(position.getX()+1);
	}
	else if (movement == 3) // Move down
	{
		position.setY(position.getY()+1);
	}
	else // Move left
	{
		position.setX(position.getX()-1);
	}
}

bool Animal::IsLandAnimal() {
	return(isLandAnimal);
}

bool Animal::IsWaterAnimal() {
	return(isLandAnimal);
}

bool Animal::IsAirAnimal() {
	return(isLandAnimal);
}

char Animal::render() {
	return 'O';
}

Point Animal::getPosition() {
	return position;
}

int Animal::getID() {
	return ID;
}