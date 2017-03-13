// file person.h

#ifndef PERSON_H
#define PERSON_H

#include "point.h"
#include "Renderable.h"

class Person: public Renderable {
  public:
    Person();
    Point GetPosition() const;
    void SetPosition(const Point& p);
    void SetPosition(int x, int y);
    char Render();
    void Move(int movement);
    void ResetPosition();

  private:
    Point position;
};

#endif