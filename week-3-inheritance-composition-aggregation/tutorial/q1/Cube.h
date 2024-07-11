#ifndef CUBE_H
#define CUBE_H

#include "Prism.h"

class Cube {
  private:
    double volume;
    Shape shape;
  public:
    // constructor
    Cube ();
    
    // destructor
    ~Cube () {};

    // member functions
    void print ();
    double calculateVol ();

    // mutator
    void setDimension (double height);

};

#endif