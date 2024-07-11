#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape {
  private:
    double height;
    double width;
  protected:
    double length;
  public:
    // constructor
    Shape ();
    Shape (double height, double width, double length);

    // destructor
    ~Shape () {};

    // member functions
    void print () const;

    // mutator
    void setVal (double height, double width, double length);

    // accessor
    void getHW (double & height, double & width) const;
};

#endif