// g++ sumOfDigits.cpp -o sumOfDigits && sumOfDigits

#include <iostream>
using namespace std;

int sumOfDigits (int num) {
  if (num == 0) return 0;

  return (num % 10) + sumOfDigits(num / 10);
}

int main () {
  int num1 = 1234;
  // Sum of digits of '1234': 10
  cout << "Sum of digits of '" << num1 << "': " << sumOfDigits(num1) << endl;

  
  int num2 = 23;
  // Sum of digits of '23': 5
  cout << "Sum of digits of '" << num2 << "': " << sumOfDigits(num2) << endl;

  return 0;
}