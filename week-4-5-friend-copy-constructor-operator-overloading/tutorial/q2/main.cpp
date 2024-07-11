// g++ main.cpp Person.cpp Student.cpp -o main && main

#include <iostream>
using namespace std;

#include "Person.h"
#include "Student.h"

int main () {
  string schools[3] = {"JSHS", "APU", "USM"};
  Person p("Wen Hao", "Penang", schools);
  Student s(123, "USM", "Tekun");

  s.print();
  cout << endl;
  p.print(s);

  // Output
  // Student ID: 123
  // School: USM
  // Desa: Tekun

  // Name: Wen Hao
  // Hometown state: Penang
  // Student ID: 123
  // School: USM
  // Desa: Tekun
  // School: JSHS, APU, USM

  return 0;
}