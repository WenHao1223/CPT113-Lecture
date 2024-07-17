#include "Queue.h"

DynQueue::DynQueue () {
  front = nullptr;
  rear = nullptr;
  numItems = 0;
}

DynQueue::~DynQueue () {
  if (!isEmpty())
    clear();
}

void DynQueue::enqueue (int num) {
  QueueNode * newNode = nullptr;
  newNode = new QueueNode;
  newNode->val = num;
  newNode->next = nullptr;

  if (!isEmpty()) {
    rear->next = newNode;
    rear = newNode;
  } else {
    front = newNode;
    rear = newNode;
  }

  numItems++;
}

void DynQueue::dequeue (int & num) {
  QueueNode * temp = nullptr;
  if (isEmpty())
    cout << "List is empty." << endl;
  else {
    num = front->val;
    temp = front->next;
    delete front;
    front = temp;
    numItems--;
  }
}

bool DynQueue::isEmpty () const {
  return !(numItems > 0);
}

void DynQueue::clear () {
  int temp;
  while (!isEmpty())
    dequeue(temp);
}