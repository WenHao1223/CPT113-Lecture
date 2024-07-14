// g++ main.cpp -o main && main

#include <iostream>
using namespace std;

template <class T>
T addition (T num1, T num2, T num3 = T()) {
  return num1 + num2 + num3;
}

int main () {
  // 1 + 2 = 3
  // 1 + 2 + 3 = 6
  // 0.5 + 0.25 = 0.75
  // 0.5 + 0.25 + 1.4 = 2.15

  int a = 1, b = 2, c = 3;
  cout << a << " + " << b << " = " << addition<int>(a, b) << endl;
  cout << a << " + " << b << " + " << c << " = " << addition<int>(a, b, c) << endl;

  double d = 0.5, e = 0.25, f = 1.4;
  cout << d << " + " << e << " = " << addition<double>(d, e) << endl;
  cout << d << " + " << e << " + " << f << " = " << addition<double>(d, e, f) << endl;

  return 0;
}