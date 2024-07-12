// g++ fibonacci.cpp -o fibonacci && fibonacci

#include <iostream>
using namespace std;

int fibonacci (int x) {
  if (x <= 0) return 0;
  if (x == 1) return 1;

  return fibonacci(x-1) + fibonacci(x-2);
}

int main () {
  cout << "Fibonacci number of 5: " << fibonacci(5) << endl; // output: 5
  cout << "Fibonacci number of 5: " << fibonacci(6) << endl; // output: 8
  cout << "Fibonacci number of 5: " << fibonacci(7) << endl; // output: 13
  cout << "Fibonacci number of 5: " << fibonacci(8) << endl; // output: 21
  return 0;
}