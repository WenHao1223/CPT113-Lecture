// g++ power.cpp -o power && power

#include <iostream>
using namespace std;

double power (int x, int y) {
  if (y == 0) return 1;
  else if (y == 1) return x;
  else if (y > 1) {
    return x * power(x, y - 1);
  } else { // y < 1
    return 1 / power(x, -y);
  }
}

int main () {
  int x, y;

  x = 2, y = 0;
  // output: 2^0 = 1
  cout << x << "^" << y << " = " << power(x, y) << endl;

  x = 2, y = 1;
  // output: 2^1 = 2
  cout << x << "^" << y << " = " << power(x, y) << endl;

  x = 2, y = 2;
  // output: 2^2 = 4
  cout << x << "^" << y << " = " << power(x, y) << endl;
  
  x = 2, y = -2;
  // output: 2^-2 = 0.25
  cout << x << "^" << y << " = " << power(x, y) << endl;

  return 0;
}