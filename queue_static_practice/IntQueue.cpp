#include "IntQueue.h"

IntQueue::IntQueue (int s) {
  queueArray = new int [s];
  queueSize = s;
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
  front = obj.front;
  rear = obj.rear;
  numItems = obj.numItems;

  for (int count = 0; count < obj.queueSize; count++)
    queueArray[count] = obj.queueArray[count];
}

IntQueue::~IntQueue () {
  delete [] queueArray;
}

void IntQueue::enqueue (int num) {
  if (isFull())
    cout << "The queue is full.\n";
  else {
    rear = (rear + 1) % queueSize;
    queueArray[rear] = num;
    numItems++;
  }
}

void IntQueue::dequeue (int & num) {
  if (isEmpty())
    cout << "The queue is empty.\n";
  else {
    front = (front + 1) % queueSize;
    num = queueArray[front];
    numItems--;
  }
}

bool IntQueue::isEmpty () {
  bool status;

  if (numItems)
    status = false;
  else
    status = true;

  return status;
}

bool IntQueue::isFull () {
  bool status;

  if (numItems < queueSize)
    status = false;
  else
    status = true;

  return status;
}

void IntQueue::clear () {
  front = queueSize - 1;
  rear = queueSize - 1;
  numItems = 0;
}