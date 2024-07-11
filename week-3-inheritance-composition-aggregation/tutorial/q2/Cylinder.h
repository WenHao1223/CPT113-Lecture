#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"

class Cylinder {
  private:
    double height;
    double volume;
    Circle circle;
  public:
    // constructor
    Cylinder ();

    // destructor
    ~Cylinder () {};

    // memmber functions
    void print () const;
    double calculateArea () const;
    double calculateVol () const;

    // mutator
    void setDimension (double radius, double height);
};

#endif