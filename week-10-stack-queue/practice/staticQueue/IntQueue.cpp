#include "IntQueue.h"

IntQueue::IntQueue (int size) {
  queueArray = new int [size];
  queueSize = size;
  front = -1;
  rear = -1;
  numItems = 0;
}

IntQueue::IntQueue (const IntQueue & obj) {
  if (obj.queueSize > 0)
    queueArray = new int [obj.queueSize];
  else
    queueArray = nullptr;

  queueSize = obj.queueSize;

  for (int i = 0; i < queueSize; i++)
    queueArray[i] = obj.queueArray[i];

  front = obj.front;
  rear = obj.rear;
  numItems = obj.numItems;
}

IntQueue::~IntQueue () {
  delete [] queueArray;
}

void IntQueue::enqueue (int num) {
  if (isFull())
    cout << "Queue is full.\n";
  else {
    rear = (rear + 1) % queueSize;
    queueArray[rear] = num;
    numItems++;
  }
}

void IntQueue::dequeue (int & num) {
  if (isEmpty())
    cout << "Queue is empty.\n";
  else {
    front = (front + 1) % queueSize;
    num = queueArray[front];
    numItems--;
  }
}

bool IntQueue::isEmpty () const {
  return !numItems;
}

bool IntQueue::isFull () const {
  return (numItems == queueSize);
}

void IntQueue::clear () {
  front = queueSize - 1;
  rear = queueSize - 1;
  numItems = 0;
}