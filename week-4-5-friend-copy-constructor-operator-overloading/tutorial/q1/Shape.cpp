#include "Shape.h"

Shape::Shape () {
  height = 0.0;
  width = 0.0;
  length = 0.0;
}

Shape::Shape (double height, double width, double length) {
  this->height = height;
  this->width = width;
  this->length = length;
}

void Shape::print () const {
  cout << "Height: " << height << " cm.\n";
  cout << "Width: " << width << " cm.\n";
  cout << "Length: " << length << " cm.\n";
}

void Shape::setVal (double height, double width, double length) {
  this->height = height;
  this->width = width;
  this->length = length;
}

void Shape::getHW (double & height, double & width) const {
  height = this->height;
  width = this->width;
}