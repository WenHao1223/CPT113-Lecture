#include <iostream>
using namespace std;

#include "DynIntQueue.h"

int main () {
  const int MAX_VALUES = 5;
  DynIntQueue iQueue;

  cout << "Enqueuing " << MAX_VALUES << " items ...\n";
  for (int x = 0; x < 5; x++)
    iQueue.enqueue(x);

  cout << "The values in the queue were:\n";
  while(!iQueue.isEmpty()) {
    int value;
    iQueue.dequeue(value);
    cout << value << endl;
  }

  return 0;
}