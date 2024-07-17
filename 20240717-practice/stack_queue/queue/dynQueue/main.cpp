#include <iostream>
using namespace std;

#include "Queue.h"

int main () {
  const int MAX_VALUES = 5;
  DynQueue iQueue;

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