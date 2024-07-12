// g++ factorial.cpp -o factorial && factorial

#include <iostream>
using namespace std;

int factorial (int num) {
  if (num == 1) return 1;
  return num * factorial(num - 1);
}

int main () {
  cout << "Factorial of 3: " << factorial(3); // output: 6
  return 0;
}