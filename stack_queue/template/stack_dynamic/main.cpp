#include <iostream>
using namespace std;

#include "DynStack.h"

int main () {
  int intCatchVar;
  DynStack<int> intStack;

  // pushing 5
  cout << "Pushing 5\n";
  intStack.push(5);

  // pushing 10
  cout << "Pushing 10\n";
  intStack.push(10);

  // pushing 15
  cout << "Pushing 15\n";
  intStack.push(15);

  // popping 15
  cout << "Popping...\n";
  intStack.pop(intCatchVar);
  cout << intCatchVar << endl;

  // popping 10
  cout << "Popping...\n";
  intStack.pop(intCatchVar);
  cout << intCatchVar << endl;

  // popping 5
  cout << "Popping...\n";
  intStack.pop(intCatchVar);
  cout << intCatchVar << endl;

  // empty
  cout << "Attempt to pop again...\n";
  intStack.pop(intCatchVar);

  double doubleCatchVar;
  DynStack<double> doubleStack;

  // pushing 5
  cout << "Pushing 0.5\n";
  doubleStack.push(0.5);

  // pushing 10
  cout << "Pushing 1.0\n";
  doubleStack.push(1.0);

  // pushing 15
  cout << "Pushing 1.5\n";
  doubleStack.push(1.5);

  // popping 1.5
  cout << "Popping...\n";
  doubleStack.pop(doubleCatchVar);
  cout << doubleCatchVar << endl;

  // popping 1.0
  cout << "Popping...\n";
  doubleStack.pop(doubleCatchVar);
  cout << doubleCatchVar << endl;

  // popping 0.5
  cout << "Popping...\n";
  doubleStack.pop(doubleCatchVar);
  cout << doubleCatchVar << endl;

  // empty
  cout << "Attempt to pop again...\n";
  doubleStack.pop(doubleCatchVar);

  return 0;
}