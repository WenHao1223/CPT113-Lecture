// g++ *.cpp -o main && main

#include <iostream>
using namespace std;

#include "Circle.h"
#include "Cone.h"
#include "Cylinder.h"
#include "Ellipse.h"

int main () {
  cout << "========= CIRCLE ========" << endl;
  Circle c1(3, 90),
    c2;

  c1.print();
  cout << endl;

  c2.print();
  cout << endl;

  c2.setVal(4,180);
  c2.print();
  cout << endl;

  double radiusFetched,
    radianFetched,
    degreeFetched,
    areaFetched;

  c2.getVal(radiusFetched, radianFetched, degreeFetched, areaFetched);
  cout << "Radian fetched: " << radiusFetched << " cm.\n";
  cout << "Area fetched: " << areaFetched << " cm^2.\n";
  
  // Output
  // Radius: 3 cm.
  // Radian: 1.571 rad.
  // Degree: 90 deg.
  // Area: 7.0695 cm^2.

  // Radius: 0 cm.
  // Radian: 0 rad.
  // Degree: 0 deg.
  // Area: 0 cm^2.

  // Radius: 4 cm.
  // Radian: 3.142 rad.
  // Degree: 180 deg.
  // Area: 25.136 cm^2.

  // Radian fetched: 4 cm.
  // Area fetched: 25.136 cm^2.

  cout << "=========================" << endl << endl;

  cout << "========== CONE =========" << endl;
  Cone n1(3, 8),
    n2;

  n1.print();
  cout << endl;

  n2.print();
  cout << endl;

  n2.setDimension(4, 9);
  n2.print();
  
  // https://www.calculatorsoup.com/calculators/geometry-solids/cone.php

  // Output
  // ========== CONE =========
  // Radius: 3 cm.
  // Height: 8 cm.
  // Area: 108.814 cm^2.
  // Volume: 75.408 cm^3.

  // Radius: 0 cm.
  // Height: 0 cm.
  // Area: 0 cm^2.
  // Volume: 0 cm^3.

  // Radius: 4 cm.
  // Height: 9 cm.
  // Area: 174.052 cm^2.
  // Volume: 150.816 cm^3.
  // =========================

  cout << "=========================" << endl << endl;

  cout << "======== CYLINDER =======" << endl;
  Cylinder y1;

  y1.print();
  cout << endl;

  y1.setDimension(4, 9);
  y1.print();
  
  // https://www.calculatorsoup.com/calculators/geometry-solids/cylinder.php
  
  // Output
  // ======== CYLINDER =======
  // Radius: 0 cm.
  // Height: 0 cm.
  // Area: 0 cm^2.
  // Volume: 0 cm^3.

  // Radius: 4 cm.
  // Height: 9 cm.
  // Area: 326.768 cm^2.
  // Volume: 452.448 cm^3.
  // =========================

  cout << "=========================" << endl << endl;

  cout << "========= ELLIPSE =======" << endl;
  Ellipse e1(3, 6),
    e2;

  e1.print();
  cout << endl;

  e2.print();
  cout << endl;

  e2.setVal(4,10);
  e2.print();

  // https://owlcalculator.com/geometry/ellipse-area
  
  // Output
  // ========= ELLIPSE =======
  // Radius: 3 cm.
  // Short Radius: 6 cm.
  // Area: 56.556 cm^2.

  // Radius: 0 cm.
  // Short Radius: 0 cm.
  // Area: 0 cm^2.

  // Radius: 4 cm.
  // Short Radius: 10 cm.
  // Area: 125.68 cm^2.
  // =========================

  cout << "=========================" << endl << endl;

  return 0;
}