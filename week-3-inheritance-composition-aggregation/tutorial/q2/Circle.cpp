#include "Circle.h"

Circle::Circle () {
  radius = 0.0;
  radian = 0.0;
  degree = 0.0;
  area = 0.0;
}

Circle::Circle (double radius, double degree) {
  this->radius = radius;
  this->degree = degree;
  radian = calcRadian();
  area = calcArea();
}

void Circle::print () const {
  cout << "Radius: " << radius << " cm.\n";
  cout << "Radian: " << radian << " rad.\n";
  cout << "Degree: " << degree << " deg.\n";
  cout << "Area: " << area << " cm^2.\n";
}

double Circle::calcRadian () const {
  return degree * PI / 180;
}

double Circle::calcArea () const {
  return radius * radius * radian / 2;
}

void Circle::setVal (double radius, double degree) {
  this->radius = radius;
  this->degree = degree;
  radian = calcRadian();
  area = calcArea();
}

void Circle::getVal (double & radius, double & radian, double & degree, double & area) const {
  radius = this->radius;
  radian = this->radian;
  degree = this->degree;
  area = this->area;
}
