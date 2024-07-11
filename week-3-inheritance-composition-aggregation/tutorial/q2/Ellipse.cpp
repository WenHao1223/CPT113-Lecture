#include "Ellipse.h"

Ellipse::Ellipse () : Circle () {
  shortRadius = 0.0;
}

Ellipse::Ellipse (double radius, double shortRadius) : Circle (radius, 360) {
  this->shortRadius = shortRadius;
  area = calcArea();
}

void Ellipse::print () const {
  cout << "Radius: " << radius << " cm.\n";
  cout << "Short Radius: " << shortRadius << " cm.\n";
  cout << "Area: " << calcArea() << " cm^2.\n";
}

double Ellipse::calcArea () const {
  return PI * radius * shortRadius;
}

void Ellipse::setVal (double radius, double shortRadius) {
  Circle::setVal(radius, 360);
  this->shortRadius = shortRadius;
  area = calcArea();
}