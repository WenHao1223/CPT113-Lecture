// g++ increasingDigit.cpp -o increasingDigit && increasingDigit

#include <iostream>
using namespace std;

bool increasingDigit (int num) {
  if (num == 0) return true;

  int lastDigit = num % 10;
  int secondLastDigit = static_cast<int>(num / 10) % 10;
  return ((lastDigit > secondLastDigit) && increasingDigit(num / 10));
}

int main () {
  int num1 = 1234;
  // Digits of '1234' in increasing order: true
  cout << "Digits of '" << num1 << "' in increasing order: " << (increasingDigit(num1) ? "true" : "false") << endl;\

  
  int num2 = 4321;
  // Digits of '4321' in increasing order: false
  cout << "Digits of '" << num2 << "' in increasing order: " << (increasingDigit(num2) ? "true" : "false") << endl;

  
  int num3 = 200;
  // Digits of '200' in increasing order: false
  cout << "Digits of '" << num3 << "' in increasing order: " << (increasingDigit(num3) ? "true" : "false") << endl;
  return 0;
}