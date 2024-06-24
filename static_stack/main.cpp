#include <iostream>
using namespace std;

#include "IntStack.h"

int main () {
  IntStack stackA = IntStack(3);

  // pushing 3
  cout << "Pushing..." << endl;
  stackA.push(3);

  // pushing 4
  cout << "Pushing..." << endl;
  stackA.push(4);

  // pushing 5
  cout << "Pushing..." << endl;
  stackA.push(5);

  // full
  cout << "Pushing..." << endl;
  stackA.push(6);

  cout << endl;

  int a;

  // copy constructor
  IntStack stackB = stackA;
  cout << "Popping stack B..." << endl;
  stackB.pop(a);
  cout << a << endl;

  // popping 5
  cout << "Popping stack A..." << endl;
  stackA.pop(a);
  cout << a << endl;

  // popping 4
  cout << "Popping..." << endl;
  stackA.pop(a);
  cout << a << endl;

  // popping 3
  cout << "Popping..." << endl;
  stackA.pop(a);
  cout << a << endl;

  // empty
  cout << "Popping..." << endl;
  stackA.pop(a);
  cout << a << endl;

  return 0;
}