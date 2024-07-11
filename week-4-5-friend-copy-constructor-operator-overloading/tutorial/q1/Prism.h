#ifndef PRISM_H
#define PRISM_H

#include "Shape.h"

// forward declaration
class Cube;

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
    double calculateArea () const;
    double calculateVol () const;

    // mutator
    void setDimension (double length, double width, double height);

    // friend function
    friend void comparePrismAndCube (const Prism & prism, const Cube & cube);

    // operator overloading
    void operator== (const Prism & obj);
};

#endif