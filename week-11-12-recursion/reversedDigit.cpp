// g++ reversedDigit.cpp -o reversedDigit && reversedDigit

#include <iostream>
#include <cmath>
using namespace std;

int reversedDigit (int num) {
  if (num == 0) return 0;

  int lastDigit = num % 10;
  return lastDigit * pow(10, int(log10(num))) + reversedDigit(num / 10);
}

int main () {
  int num1 = 1234;
  cout << "Reversed digit of '" << num1 << "': " << reversedDigit(num1) << endl;

  int num2 = 345;
  cout << "Reversed digit of '" << num2 << "': " << reversedDigit(num2) << endl;
  return 0;
}