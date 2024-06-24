// g++ gcd.cpp -o gcd && gcd

#include <iostream>
using namespace std;

int gcd (int x, int y) {
  if (!(x % y))
    return y;
  
  return gcd(y, x % y);
}

int main () {
  cout << "GCD of 80 and 30: " << gcd(80, 30); // output: 10
  cout << "GCD of 40 and 15: " << gcd(40, 15); // output: 5
  return 0;
}