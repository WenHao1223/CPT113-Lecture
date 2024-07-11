#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <cmath>
using namespace std;

class Circle {
  private:
    double radian;
    double degree;
    double area;
  protected:
    double radius;
  public:
    // member class variable
    const double PI = 3.142;

    // constructor
    Circle ();
    Circle (double radius, double degree);

    // destructor
    ~Circle () {};

    // member functions
    void print () const;
    double calcRadian () const;
    double calcArea () const;

    // mutator
    void setVal (double radius, double degree);

    // accessor
    void getVal (double & radius, double & radian, double & degree, double & area) const;
};

#endif