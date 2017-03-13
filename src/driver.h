#ifndef DRIVER_H
#define DRIVER_H

#include "zoo.h"

class Driver {
  public:
    Driver();
    void InitZoo();
		
  private:
    Zoo zoo;
};

#endif