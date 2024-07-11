#ifndef CONE_H
#define CONE_H

#include "Circle.h"

class Cone : public Circle {
  private:
    double height;
    double area;
    double volume;
  public:
    // constructor
    Cone ();
    Cone (double radius, double height);

    // destructor
    ~Cone () {};

    // member functions
    void print () const;
    double calculateArea () const;
    double calculateVol () const;

    // mutator
    void setDimension (double radius, double height);
};

#endif