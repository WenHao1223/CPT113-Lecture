// g++ *.cpp -o main && main

#include <iostream>
using namespace std;

#include "Shape.h"
#include "Prism.h"
#include "Cube.h"

// friend function
void comparePrismAndCube (const Prism & prism, const Cube & cube) {
  cout << "Volume of prism: " << prism.volume << " cm^3.\n";
  cout << "Surface area of prism: " << prism.calculateArea() << " cm^2.\n";
  cout << "Volume of cube: " << cube.volume << " cm^3.\n";
  cout << "Surface area of cube: " << cube.calculateArea() << " cm^2.\n";

  cout << endl;

  if (prism.volume == cube.volume)
    cout << "Both shapes have same volume.\n";
  else if (prism.volume > cube.volume)
    cout << "Prism has bigger volume.\n";
  else
    cout << "Cube has bigger volume.\n";

  if (prism.calculateArea() == cube.calculateArea())
    cout << "Both shapes have same surface area.\n";
  else if (prism.calculateArea() > cube.calculateArea())
    cout << "Prism has bigger surface area.\n";
  else
    cout << "Cube has bigger surface area.\n";
}

int main () {
  cout << "========= SHAPE =========" << endl;
  Shape s1(3,4,5),
    s2;

  s1.print();
  cout << endl;

  s2.setVal(6,7,8);

  double heightFetched,
    widthFetched;

  s2.getHW(heightFetched, widthFetched);
  cout << "Height of s2: " << heightFetched << " cm.\n";
  cout << "Width of s2: " << widthFetched << " cm.\n";
  cout << endl;

  s2.setVal(6,7,9);
  s2.print();

  // Output
  // ========= SHAPE =========
  // Height: 3 cm.
  // Width: 4 cm.
  // Length: 5 cm.

  // Height of s2: 6 cm.      
  // Width of s2: 7 cm.       

  // Height: 6 cm.
  // Width: 7 cm.
  // Length: 9 cm.
  // =========================
  
  cout << "=========================" << endl << endl;

  cout << "========= PRISM =========" << endl;
  Prism p1(2,3,4,5),
    p2;

  p1.print();
  cout << endl;

  p2.setDimension(6,7,8);

  p2.getHW(heightFetched, widthFetched);
  cout << "Height of p2: " << heightFetched << " cm.\n";
  cout << "Width of p2: " << widthFetched << " cm.\n";
  cout << endl;

  p2.setVal(6,7,9);
  p2.print();

  // Output
  // ========= PRISM =========
  // Height: 2 cm.
  // Width: 3 cm.
  // Length: 4 cm.
  // Volume: 24 cm^3.

  // Height of p2: 8 cm.
  // Width of p2: 7 cm.

  // Height: 6 cm.
  // Width: 7 cm.
  // Length: 9 cm.
  // Volume: 378 cm^3.
  // =========================

  cout << "=========================" << endl << endl;

  cout << "========== CUBE =========" << endl;
  Cube c1;

  c1.print();
  cout << endl;

  c1.setDimension(3);
  c1.print();

  // Output
  // ========== CUBE =========
  // Height: 0 cm.
  // Width: 0 cm.
  // Length: 0 cm.
  // Volume: 0 cm^3.

  // Height: 3 cm.
  // Width: 3 cm.
  // Length: 3 cm.
  // Volume: 27 cm^3.
  // =========================
  
  cout << "=========================" << endl << endl;

  cout << "========= FRIEND ========" << endl;
  
  comparePrismAndCube(p1, c1);

  // Output
  // ========= FRIEND ========
  // Volume of prism: 24 cm^3.
  // Surface area of prism: 52 cm^2.
  // Volume of cube: 27 cm^3.
  // Surface area of cube: 54 cm^2.

  // Cube has bigger volume.
  // Cube has bigger surface area.
  // =========================

  cout << "=========================" << endl << endl;

  cout << "== OPERATOR OVERLOADING =="<< endl;
  
  p1 == p2;
  cout << endl;
  c1 == c1;

  // Output
  // == OPERATOR OVERLOADING ==
  // Volume of first prism: 24 cm^3.
  // Surface area of first prism: 52 cm^2.
  // Volume of second prism: 378 cm^3.
  // Surface area of second prism: 318 cm^2.

  // Second prism has bigger volume.
  // Second prism has bigger surface area.

  // Volume of first cube: 27 cm^3.
  // Surface area of first cube: 54 cm^2.
  // Volume of second cube: 27 cm^3.
  // Surface area of second cube: 54 cm^2.

  // Both cubes have same volume.
  // Both cubes have same surface area.
  // =========================

  cout << "=========================" << endl << endl;

  
  return 0;
}