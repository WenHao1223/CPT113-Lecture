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

double Prism::calculateArea () const {
  double heightFetched,
    widthFetched;

  getHW(heightFetched, widthFetched);

  return heightFetched * widthFetched * 2 + heightFetched * length * 2 + widthFetched * length * 2;
}

double Prism::calculateVol () const {
  double heightFetched,
    widthFetched;

  getHW(heightFetched, widthFetched);

  return heightFetched * widthFetched * length;
}

void Prism::setDimension (double length, double width, double height) {
  setVal(height, width, length);
  volume = calculateVol();
}

void Prism::operator== (const Prism & obj) {
  cout << "Volume of first prism: " << this->volume << " cm^3.\n";
  cout << "Surface area of first prism: " << this->calculateArea() << " cm^2.\n";
  cout << "Volume of second prism: " << obj.volume << " cm^3.\n";
  cout << "Surface area of second prism: " << obj.calculateArea() << " cm^2.\n";

  cout << endl;

  if (this->volume == obj.volume)
    cout << "Both prisms have same volume.\n";
  else if (this->volume > obj.volume)
    cout << "First prism has bigger volume.\n";
  else
    cout << "Second prism has bigger volume.\n";

  if (this->calculateArea() == obj.calculateArea())
    cout << "Both prisms have same surface area.\n";
  else if (this->calculateArea() > obj.calculateArea())
    cout << "First prism has bigger surface area.\n";
  else
    cout << "Second prism has bigger surface area.\n";
}