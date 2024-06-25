#include "Queue.h"

template <class T>
Queue<T>::Queue(int s) {
  queueArray = new T[s];
  queueSize = s;
  front = -1;
  rear = -1;
  numItems = 0;
}

template <class T>
Queue<T>::Queue (const Queue & obj) {
  queueArray = new T [obj.queueSize];
  
  queueSize = obj.queueSize;
  front = obj.front;
  rear = obj.rear;
  numItems = obj.numItems;

  for (int count = 0; count < obj.queueSize; count++) {
    queueArray[count] = obj.queueArray[count];
  }
}

template <class T>
Queue<T>::~Queue () {
  delete [] queueArray;
}

template <class T>
void Queue<T>::enqueue (T num) {
  if (isFull())
    cout << "The queue is full.\n";
  else {
    rear = (rear + 1) % queueSize;
    queueArray[rear] = num;
    numItems++;
  }
}

template <class T>
void Queue<T>::dequeue (T & num) {
  if (isEmpty())
    cout << "The queue is empty.\n";
  else {
    front = (front + 1) % queueSize;
    num = queueArray[front];
    numItems--;
  }
}

template <class T>
bool Queue<T>::isEmpty() const {
  bool status;

  if (numItems)
    status = false;
  else
    status = true;
  
  return status;
}

template <class T>
bool Queue<T>::isFull() const {
  bool status;

  if (numItems < queueSize)
    status = false;
  else
    status = true;

  return status;
}

template <class T>
void Queue<T>::clear() {
  front = queueSize - 1;
  rear = queueSize - 1;
  numItems = 0;
}

template class Queue <int>;
template class Queue <float>;
template class Queue <double>;
template class Queue <char>;