// g++ sumOfSquares.cpp -o sumOfSquares && sumOfSquares

#include <iostream>
using namespace std;

int sumOfSquares(int num) {
  if (num <= 0)
    return 0;
  else
    return num * num + sumOfSquares(num - 1);
}

int main () {
  int num1 = 4;
  // Sum of squares from 0 to 4: 30
  cout << "Sum of squares from 0 to " << num1 << ": " << sumOfSquares(num1) << endl;

  int num2 = 2;
  // Sum of squares from 0 to 4: 5
  cout << "Sum of squares from 0 to " << num1 << ": " << sumOfSquares(num2) << endl;

  int num3 = -1;
  // Sum of squares from 0 to -1: 0
  cout << "Sum of squares from 0 to " << num3 << ": " << sumOfSquares(num3) << endl;
  return 0;
}