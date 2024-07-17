// g++ *.cpp -o main && main

#include <iostream>
using namespace std;

#include "Stack.h"

int main () {
  int catchVar;
  DynStack stack;

  // pushing 5
  cout << "Pushing 5\n";
  stack.push(5);

  // pushing 10
  cout << "Pushing 10\n";
  stack.push(10);

  // pushing 15
  cout << "Pushing 15\n";
  stack.push(15);

  // popping 15
  cout << "Popping...\n";
  stack.pop(catchVar);
  cout << catchVar << endl;

  // popping 10
  cout << "Popping...\n";
  stack.pop(catchVar);
  cout << catchVar << endl;

  // popping 5
  cout << "Popping...\n";
  stack.pop(catchVar);
  cout << catchVar << endl;

  // empty
  cout << "Attempt to pop again...\n";
  stack.pop(catchVar);

  return 0;
}