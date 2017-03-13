#ifndef ANIMAL_H
#define ANIMAL_H

#include "../misc/renderable.h"
#include "../misc/point.h"
#include <string>
#include <iostream>

class Animal: public Renderable {
  public:
    /** @brief Constructor
      * M
      */
    virtual void Interact() = 0;
    void Move(int movement);
    bool IsLandAnimal();
    bool IsWaterAnimal();
    bool IsAirAnimal();
    char render();
    Point getPosition();
    int getID();

  protected:
    int ID;
    int limbCount;
    std::string skinType;
    bool isLandAnimal;
    bool isWaterAnimal;
    bool isAirAnimal;
    Point position;
};

#endif