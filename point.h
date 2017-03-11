// File: point.h

#ifndef POINT_H
#define POINT_H

class Point {
	public:
		// Setter
		void setX(int _x);
		void setY(int _y);

		// Getter
		int getX();
		int getY();

	private:
		unsigned int x;
		unsigned int y;
};

#endif