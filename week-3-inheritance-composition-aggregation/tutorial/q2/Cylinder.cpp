#include "Cylinder.h"

Cylinder::Cylinder () {
  height = 0.0;
  volume = 0.0;
  circle.setVal(0.0, 0.0);
}

void Cylinder::print () const {
  double radiusFetched,
    radianFetched,
    degreeFetched,
    areaFetched;

  circle.getVal(radiusFetched, radianFetched, degreeFetched, areaFetched);

  cout << "Radius: " << radiusFetched << " cm.\n";
  cout << "Height: " << height << " cm.\n";
  cout << "Area: " << calculateArea() << " cm^2.\n";
  cout << "Volume: " << volume << " cm^3.\n";
}

double Cylinder::calculateArea () const {
  double radiusFetched,
    radianFetched,
    degreeFetched,
    areaFetched;
  
  circle.getVal(radiusFetched, radianFetched, degreeFetched, areaFetched);

  // 2πr (r + h)
  return 2 * circle.PI * radiusFetched * (radiusFetched + height);
}

double Cylinder::calculateVol () const {
  double radiusFetched,
    radianFetched,
    degreeFetched,
    areaFetched;
  
  circle.getVal(radiusFetched, radianFetched, degreeFetched, areaFetched);

  // π r 2 h
  return circle.PI * radiusFetched * radiusFetched * height;
}

void Cylinder::setDimension (double radius, double height) {
  this->height = height;
  circle.setVal(radius, 360);
  volume = calculateVol();
}