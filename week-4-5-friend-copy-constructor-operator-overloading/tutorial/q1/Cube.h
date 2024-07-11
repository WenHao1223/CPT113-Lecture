#ifndef CUBE_H
#define CUBE_H

#include "Prism.h"

class Cube {
  private:
    double area;
    double volume;
    Shape shape;
  public:
    // constructor
    Cube ();
    
    // destructor
    ~Cube () {};

    // member functions
    void print ();
    double calculateArea () const;
    double calculateVol () const;

    // mutator
    void setDimension (double height);

    // friend function
    friend void comparePrismAndCube (const Prism & prism, const Cube & cube);

    // operator overloading
    void operator== (const Cube & obj);
};

#endif