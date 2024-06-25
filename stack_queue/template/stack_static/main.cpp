#include <iostream>
using namespace std;

#include "Stack.h"

int main () {
  Stack stackIntA = Stack<int>(3);

  // pushing 3
  cout << "Pushing..." << endl;
  stackIntA.push(3);

  // pushing 4
  cout << "Pushing..." << endl;
  stackIntA.push(4);

  // pushing 5
  cout << "Pushing..." << endl;
  stackIntA.push(5);

  // full
  cout << "Pushing..." << endl;
  stackIntA.push(6);

  cout << endl;

  int catchInt;

  // copy constructor
  Stack stackIntB = stackIntA;
  cout << "Popping stack int B..." << endl;
  stackIntB.pop(catchInt);
  cout << catchInt << endl;

  // popping 5
  cout << "Popping stack int A..." << endl;
  stackIntA.pop(catchInt);
  cout << catchInt << endl;

  // popping 4
  cout << "Popping..." << endl;
  stackIntA.pop(catchInt);
  cout << catchInt << endl;

  // popping 3
  cout << "Popping..." << endl;
  stackIntA.pop(catchInt);
  cout << catchInt << endl;

  // empty
  cout << "Popping..." << endl;
  stackIntA.pop(catchInt);
  cout << catchInt << endl;

  Stack stackDoubleA = Stack<double>(3);

  // pushing 0.3
  cout << "Pushing..." << endl;
  stackDoubleA.push(0.3);

  // pushing 0.4
  cout << "Pushing..." << endl;
  stackDoubleA.push(0.4);

  // pushing 5
  cout << "Pushing..." << endl;
  stackDoubleA.push(0.5);

  // full
  cout << "Pushing..." << endl;
  stackDoubleA.push(0.6);

  cout << endl;

  double catchDouble;

  // copy constructor
  Stack stackDoubleB = stackDoubleA;
  cout << "Popping stack double B..." << endl;
  stackDoubleB.pop(catchDouble);
  cout << catchDouble << endl;

  // popping 0.5
  cout << "Popping stack double A..." << endl;
  stackDoubleA.pop(catchDouble);
  cout << catchDouble << endl;

  // popping 0.4
  cout << "Popping..." << endl;
  stackDoubleA.pop(catchDouble);
  cout << catchDouble << endl;

  // popping 0.3
  cout << "Popping..." << endl;
  stackDoubleA.pop(catchDouble);
  cout << catchDouble << endl;

  // empty
  cout << "Popping..." << endl;
  stackDoubleA.pop(catchDouble);
  cout << catchDouble << endl;

  return 0;
}