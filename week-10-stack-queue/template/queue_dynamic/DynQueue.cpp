#include "DynQueue.h"

template <class T>
DynQueue<T>::DynQueue () {
  front = nullptr;
  rear = nullptr;
  numItems = 0;
}

template <class T>
DynQueue<T>::~DynQueue () {
  clear();
}

template <class T>
void DynQueue<T>::enqueue (T num) {
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

template <class T>
void DynQueue<T>::dequeue (T & num) {
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

template <class T>
bool DynQueue<T>::isEmpty () const {
  bool status;

  if (numItems > 0)
    status = false;
  else
    status = true;

  return status;
}

template <class T>
void DynQueue<T>::clear () {
  T value;
  while (!isEmpty())
    dequeue(value);
}

template class DynQueue<int>;
template class DynQueue<float>;
template class DynQueue<double>;
template class DynQueue<char>;