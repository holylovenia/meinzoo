// File: point.cpp

// ctor
Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(int _x, int _y) {
	x = _x;
	y = _y;
}

// Setter
void Point::setX(int _x) {
	x = _x;
}
void Point::setY(int _y) {
	y = _y;
}

// Getter
int Point::getX() const {
	return x;
}
int Point::getY() const {
	return y;
}

// Movement
void Point::moveUp() {
	y += 1;
}
void Point::moveRight() {
	x += 1;
}
void Point::moveDown() {
	y -= 1;
}
void Point::moveLeft() {
	x -= 1;
}