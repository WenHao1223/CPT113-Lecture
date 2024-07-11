#include <iostream>
using namespace std;

#include "DynQueue.h"

int main () {
  const int MAX_VALUES = 5;
  DynQueue<int> intQueue;

  cout << "Enqueuing " << MAX_VALUES << " items ...\n";
  for (int x = 0; x < 5; x++)
    intQueue.enqueue(x);

  cout << "The values in the queue were:\n";
  while(!intQueue.isEmpty()) {
    int value;
    intQueue.dequeue(value);
    cout << value << endl;
  }

  DynQueue<double> doubleQueue;

  cout << "Enqueuing " << MAX_VALUES << " items ...\n";
  for (double x = 0; x < 2; x+=0.5)
    doubleQueue.enqueue(x);

  cout << "The values in the queue were:\n";
  while(!doubleQueue.isEmpty()) {
    double value;
    doubleQueue.dequeue(value);
    cout << value << endl;
  }

  return 0;
}