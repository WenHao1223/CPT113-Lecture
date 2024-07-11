#include <iostream>
using namespace std;

#include "Queue.h"

int main () {
  const int MAX_VALUES = 5;
  Queue<int> intQueue (MAX_VALUES);

  cout << "Enqueuing " << MAX_VALUES << " items ...\n";
  for (int x = 0; x < MAX_VALUES; x++)
    intQueue.enqueue(x);

  cout << "Now attempting to enqueue again ... \n";
  intQueue.enqueue(MAX_VALUES);

  cout << "The values in the queue were:\n";
  while (!intQueue.isEmpty()) {
    int value;
    intQueue.dequeue(value);
    cout << value << endl;
  }

  Queue<double> doubleQueue (MAX_VALUES);

  cout << "Enqueuing " << MAX_VALUES << " items ...\n";
  for (double x = 0; x < MAX_VALUES * 0.5; x += 0.5)
    doubleQueue.enqueue(x);

  cout << "Now attempting to enqueue again ... \n";
  doubleQueue.enqueue(MAX_VALUES);

  cout << "The values in the queue were:\n";
  while (!doubleQueue.isEmpty()) {
    double value;
    doubleQueue.dequeue(value);
    cout << value << endl;
  }

  return 0;
}