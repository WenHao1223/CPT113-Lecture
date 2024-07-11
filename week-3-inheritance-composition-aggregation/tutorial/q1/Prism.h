#ifndef PRISM_H
#define PRISM_H

#include "Shape.h"

class Prism : public Shape {
  private:
    double volume;
  public:
    // constructor
    Prism ();
    Prism (double height, double width, double length, double volume);

    // destructor
    ~Prism () {};

    // member functions
    void print();
    double calculateVol();

    // mutator
    void setDimension (double length, double width, double height);
};

#endif