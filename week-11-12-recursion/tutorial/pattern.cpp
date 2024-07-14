// g++ pattern.cpp -o pattern && pattern

#include <iostream>
using namespace std;

void pattern (int num, int count = 0, int spaces = 0) {
  if (num < 1) return;

  if (count <= 0)
    pattern(num - 1, count - 1, spaces + 1);

  for (int i = 0; i < spaces; i++)
    cout << " ";

  for (int i = 0; i < num; i++)
    cout << "* ";
  cout << endl;

  if (count >= 0)
    pattern(num - 1, count + 1, spaces + 1);
}

int main () {
  // output:
  //    *    
  //   * *   
  // * * *  
  // * * * * 
  // * * *  
  //   * *   
  //   * 
  pattern(4);

  cout << endl;

  // output:
  //   *
  //  * * 
  // * * *
  //  * *
  //   *
  pattern(3);
  return 0;
}