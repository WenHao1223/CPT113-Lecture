#include "Cone.h"

Cone::Cone () : Circle () {
  height = 0.0;
  area = 0.0;
  volume = 0.0;
}

Cone::Cone (double radius, double height) : Circle (radius, 360) {
  this->height = height;
  area = calculateArea();
  volume = calculateVol();
}

void Cone::print () const {
  cout << "Radius: " << radius << " cm.\n";
  cout << "Height: " << height << " cm.\n";
  cout << "Area: " << area << " cm^2.\n";
  cout << "Volume: " << volume << " cm^3.\n";
}

double Cone::calculateArea () const {
  // πr(r+√(h2+r2))
  return PI * radius * (radius + sqrt(height * height + radius * radius));
}

double Cone::calculateVol () const {
  return calcArea() * height / 3;
}

void Cone::setDimension (double radius, double height) {
  setVal(radius, 360);
  this->height = height;
  area = calculateArea();
  volume = calculateVol();
}