#include <iostream>
using namespace std;

#include "IntQueue.h"

int main () {
  const int MAX_VALUES = 5;
  IntQueue iQueue (MAX_VALUES);

  cout << "Enqueuing " << MAX_VALUES << " items ...\n";
  for (int x = 0; x < MAX_VALUES; x++)
    iQueue.enqueue(x);

  cout << "Now attempting to enqueue again ... \n";
  iQueue.enqueue(MAX_VALUES);

  cout << "The values in the queue were:\n";
  while (!iQueue.isEmpty()) {
    int value;
    iQueue.dequeue(value);
    cout << value << endl;
  }

  return 0;
}