#include "Queue.h"

Queue::Queue (int size) {
  queueArray = new int [size];
  this->size = size;
  front = -1;
  rear = -1;
  numOfItems = 0;
}

Queue::Queue (const Queue & obj) {
  if (obj.size > 0)
    queueArray = new int [size];
  else
    queueArray = nullptr;

  front = obj.front;
  rear = obj.rear;
  numOfItems = obj.numOfItems;

  for (int i = 0; i < size; i++)
    queueArray[i] = obj.queueArray[i];
}

Queue::~Queue () {
  delete [] queueArray;
};

void Queue::enqueue (int num) {
  if (isFull())
    cout << "List is full." << endl;
  else {
    rear = (rear + 1) % size;
    queueArray[rear] = num;
    numOfItems++;
  }
}

void Queue::dequeue (int & num) {
  if (isEmpty()) {
    cout << "List is empty." << endl;
  } else {
    front = (front + 1) % size;
    num = queueArray[front];
    numOfItems--;
  }
}

bool Queue::isEmpty () const {
  return (!numOfItems);
}

bool Queue::isFull () const {
  return !(numOfItems < size);
}

void Queue::clear () {
  front = size - 1;
  rear = size - 1;
  numOfItems = 0;
}