#include "StaticQueue.h"

template <class T>
StaticQueue<T>::StaticQueue (int size) {
  queueArray = new T [size];
  queueSize = size;
  front = -1;
  rear = -1;
  numOfItems = 0;
}

template <class T>
StaticQueue<T>::StaticQueue (const StaticQueue & obj) {
  if (obj.queueSize > 0)
    queueArray = new T [obj.queueSize];
  else
    queueArray = nullptr;

  queueSize = obj.queueSize;

  for (int i = 0; i < queueSize; i++)
    queueArray[i] = obj.queueArray[i];

  front = obj.front;
  rear = obj.rear;
  numOfItems = obj.numOfItems;
}

template <class T>
StaticQueue<T>::~StaticQueue () {
  delete [] queueArray;
}

template <class T>
void StaticQueue<T>::enqueue (T num) {
  if (isFull())
    cout << "List is full." << endl;
  else {
    rear = (rear + 1) % queueSize;
    queueArray[rear] = num;
    numOfItems++;
  }
}

template <class T>
void StaticQueue<T>::dequeue (T & num) {
  if (isEmpty())
    cout << "List is empty." << endl;
  else {
    front = (front + 1) % queueSize;
    num = queueArray[front];
    numOfItems--;
  }
}

// so I assume the question is asking to just display all elements,
// from front to rear,
// instead of dequeuing,
// which will remove the element after reading
template <class T>
void StaticQueue<T>::display () const {
  if (isEmpty())
    cout << "List is empty" << endl;
  else {
    for (int i = 0; i < numOfItems; i++)
      cout << queueArray[front + i] << " ";
    cout << endl;
  }
}

template <class T>
bool StaticQueue<T>::isEmpty () const {
  return (numOfItems == 0);
}

template <class T>
bool StaticQueue<T>::isFull () const {
  return (numOfItems == queueSize - 1);
}

template class StaticQueue <int>;
template class StaticQueue <float>;
template class StaticQueue <double>;
template class StaticQueue <char>;