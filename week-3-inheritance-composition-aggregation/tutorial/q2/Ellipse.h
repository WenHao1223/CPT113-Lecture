#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Circle.h"

class Ellipse : public Circle {
  private:
    double shortRadius;
    double area;
  public:
    // constructor
    Ellipse ();
    Ellipse (double radius, double shortRadius);

    // destructor
    ~Ellipse () {};

    // member functions
    void print () const;
    double calcArea () const;

    // mutator
    void setVal (double radius, double shortRadius);
};

#endif