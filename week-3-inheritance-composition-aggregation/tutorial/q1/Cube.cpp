#include "Cube.h"

Cube::Cube() {
  volume = 0.0;
  shape.setVal(0.0, 0.0, 0.0);
}

void Cube::print() {
  shape.print();
  volume = calculateVol();
  cout << "Volume: " << volume << " cm^3.\n";
}

double Cube::calculateVol () {
  double heightFetched,
    widthFetched;

  shape.getHW(heightFetched, widthFetched);

  return heightFetched * heightFetched * heightFetched;
}

void Cube::setDimension (double height) {
  shape.setVal(height, height, height);
  volume = calculateVol();
}