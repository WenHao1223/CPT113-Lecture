#include "DynIntQueue.h"

DynIntQueue::DynIntQueue () {
  front = nullptr;
  rear = nullptr;
  numItems = 0;
}

DynIntQueue::~DynIntQueue () {
  clear();
}

void DynIntQueue::enqueue (int num) {
  QueueNode * newNode;
  newNode = new QueueNode;
  newNode->val = num;
  newNode->next = nullptr;

  if (isEmpty()) {
    front = newNode;
    rear = newNode;
  } else {
    rear->next = newNode;
    rear = newNode;
  }

  numItems++;
}

void DynIntQueue::dequeue (int & num) {
  if (isEmpty())
    cout << "Queue is empty.\n";
  else {
    QueueNode * nodePtr = nullptr;
    num = front->val;
    nodePtr = front->next;
    delete front;
    front = nodePtr;
    numItems--;
  }
}

bool DynIntQueue::isEmpty () const {
  return (numItems == 0);
}

void DynIntQueue::clear () {
  int value;

  while (!isEmpty())
    dequeue(value);
}