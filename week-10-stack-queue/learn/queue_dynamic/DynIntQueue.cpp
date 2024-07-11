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
  QueueNode *newNode = nullptr;
  newNode = new QueueNode;
  newNode->value = num;
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
  QueueNode *temp = nullptr;

  if (isEmpty())
    cout << "The queue is empty.\n";
  else {
    num = front->value;
    temp = front;
    front = front->next;
    delete temp;
    numItems--;
  }
}

bool DynIntQueue::isEmpty () const {
  bool status;

  if (numItems > 0)
    status = false;
  else
    status = true;

  return status;
}

void DynIntQueue::clear () {
  int value;
  while (!isEmpty())
    dequeue(value);
}