#include "Prism.h"

Prism::Prism () : Shape () {
  volume = 0.0;
}

Prism::Prism (double height, double width, double length, double volume) : Shape (height, width, length) {
  this->volume = volume;
}

void Prism::print () {
  Shape::print();
  volume = calculateVol();
  cout << "Volume: " << volume << " cm^3.\n";
}

double Prism::calculateVol () {
  double heightFetched,
    widthFetched;

  getHW(heightFetched, widthFetched);

  return heightFetched * widthFetched * length;
}

void Prism::setDimension (double length, double width, double height) {
  setVal(height, width, length);
  volume = calculateVol();
}