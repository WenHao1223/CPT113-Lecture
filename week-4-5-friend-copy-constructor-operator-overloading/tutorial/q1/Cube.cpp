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

double Cube::calculateArea () const {
  double heightFetched,
    widthFetched;

  shape.getHW(heightFetched, widthFetched);

  return heightFetched * heightFetched * 6;
}

double Cube::calculateVol () const {
  double heightFetched,
    widthFetched;

  shape.getHW(heightFetched, widthFetched);

  return heightFetched * heightFetched * heightFetched;
}

void Cube::setDimension (double height) {
  shape.setVal(height, height, height);
  volume = calculateVol();
}

void Cube::operator== (const Cube & obj) {
  cout << "Volume of first cube: " << this->volume << " cm^3.\n";
  cout << "Surface area of first cube: " << this->calculateArea() << " cm^2.\n";
  cout << "Volume of second cube: " << obj.volume << " cm^3.\n";
  cout << "Surface area of second cube: " << obj.calculateArea() << " cm^2.\n";

  cout << endl;

  if (this->volume == obj.volume)
    cout << "Both cubes have same volume.\n";
  else if (this->volume > obj.volume)
    cout << "First cube has bigger volume.\n";
  else
    cout << "Second cube has bigger volume.\n";

  if (this->calculateArea() == obj.calculateArea())
    cout << "Both cubes have same surface area.\n";
  else if (this->calculateArea() > obj.calculateArea())
    cout << "First cube has bigger surface area.\n";
  else
    cout << "Second cube has bigger surface area.\n";
}