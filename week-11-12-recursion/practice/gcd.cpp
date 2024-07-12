// g++ gcd.cpp -o gcd && gcd

#include <iostream>
using namespace std;

int gcd (int a, int b) {
  if (a % b == 0) return b;
  else return gcd(b, a % b); 
}

int main () {
  cout << "GCD of 80 and 30: " << gcd(80, 30); // output: 10
  cout << endl;
  cout << "GCD of 40 and 15: " << gcd(40, 15); // output: 5
  return 0;
}