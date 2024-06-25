#include "Stack.h"

template <class T>
Stack<T>::Stack(int size) {
  stackArray = new T (size);
  stackSize = size;
  top = -1;
}

template <class T>
Stack<T>::Stack(const Stack &obj) {
  if (obj.stackSize > 0)
    stackArray = new T[obj.stackSize];
  else
    stackArray = nullptr;

  stackSize = obj.stackSize;

  for (int count = 0; count < stackSize; count++) {
    stackArray[count] = obj.stackArray[count];
  }

  top = obj.top;
}

template <class T>
Stack<T>::~Stack () {
  delete [] stackArray;
}

template <class T>
void Stack<T>::push (T num) {
  if (isFull())
    cout << "The stack is full.\n";
  else {
    top++;
    stackArray[top] = num;
  }
}

template <class T>
void Stack<T>::pop (T &num) {
  if (isEmpty())
    cout << "The stack is empty.\n";
  else {
    num = stackArray[top];
    top--;
  }
}

template <class T>
bool Stack<T>::isFull () const {
  bool status;

  if (top == stackSize - 1)
    status = true;
  else
    status = false;

  return status;
}

template <class T>
bool Stack<T>::isEmpty () const {
  bool status;

  if (top == -1)
    status = true;
  else
    status = false;

  return status;
}

template class Stack <int>;
template class Stack <float>;
template class Stack <double>;
template class Stack <char>;