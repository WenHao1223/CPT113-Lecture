// g++ *.cpp -o main && main
// output: output.txt

#include <iostream>
using namespace std;

#include "Line.h"

int main () {
  Line l;
  l.setLength(5.2);
  cout << "Length of line: " << l.getLength() << " cm";

  return 0;
}