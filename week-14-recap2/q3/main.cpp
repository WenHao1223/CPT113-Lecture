// g++ main.cpp -o main && main

#include <iostream>
using namespace std;

double FtoC (double tempF) {
  return 5.0 / 9.0 * (tempF - 32);
}

double CtoF (double tempC) {
  return 9.0 / 5.0 * tempC + 32;
}

int main () {
  double temp;
  int unit;

  cout << "Temperature: ";
  try {
    cin >> temp;
    cin.ignore();
  } catch (char const * e) {
    cout << "Error: " << e << endl;
  }

  cout << "Convert from ...\n";
  cout << "1 - Celcius to Fahrenheit\n";
  cout << "2 - Fahrenheit to Celcius\n";
  cout << "Choice: ";
  try {
    cin >> unit;
    cin.ignore();
    if (unit != 1 && unit != 2)
      throw "Invalid input.";
  } catch (char const * e) {
    cout << "Error: " << e << endl;
  }

  if (unit == 1)
    cout << temp << " C = " << CtoF(temp) << " F.";
  else
    cout << temp << " F = " << FtoC(temp) << " C.";

  // Temperature: 1
  // Convert from ...
  // 1 - Celcius to Fahrenheit
  // 2 - Fahrenheit to Celcius
  // Choice: 1
  // 1 C = 33.8 F.

  // Temperature: 1
  // Convert from ...
  // 1 - Celcius to Fahrenheit
  // 2 - Fahrenheit to Celcius
  // Choice: 2
  // 1 F = -17.2222 C.

  return 0;
}