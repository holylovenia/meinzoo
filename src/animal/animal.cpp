#include "animal.h"

void Move(Animal& A, int movement) {
	if (movement == 1) // Move up
	{
		A.position.setY(A.position.getY()-1);
	}
	else if (movement == 2) // Move right
	{
		A.position.setX(A.position.getX()+1);
	}
	else if (movement == 3) // Move down
	{
		A.position.setY(A.position.getY()+1);
	}
	else // Move left
	{
		A.position.setX(A.position.getX()-1);
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