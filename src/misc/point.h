// File: point.h

#ifndef POINT_H
#define POINT_H

class Point {
	public:
		// ctor
		Point();
		Point(int _x, int _y);
		
		// Setter
		void setX(int _x);
		void setY(int _y);

		// Getter
		int getX() const;
		int getY() const;
		
		bool operator<(const Point& p) const;

	private:
		unsigned int x;
		unsigned int y;
};

#endif