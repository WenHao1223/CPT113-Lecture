#include "DynStack.h"

template <class T>
DynStack<T>::~DynStack() {
  StackNode *nodePtr = nullptr,
    *nextNode = nullptr;

  nodePtr = top;

  while (nodePtr != nullptr) {
    nextNode = nodePtr->next;
    delete nodePtr;
    nodePtr = nextNode;
  }
}

template <class T>
void DynStack<T>::push (T num) {
  StackNode *newNode = nullptr;

  newNode = new StackNode;
  newNode->value = num;

  if (isEmpty()) {
    top = newNode;
    newNode->next = nullptr;
  } else {
    newNode->next = top;
    top = newNode;
  }
}

template <class T>
void DynStack<T>::pop (T &num) {
  StackNode *temp = nullptr;
  if (isEmpty()) {
    cout << "Stack is empty.\n";
  } else {
    num = top->value;
    temp = top->next;
    delete top;
    top = temp;
  }
}

template <class T>
bool DynStack<T>::isEmpty () {
  bool status;

  if (!top)
    status = true;
  else
    status = false;

  return status;
}

template class DynStack <int>;
template class DynStack <float>;
template class DynStack <double>;
template class DynStack <char>;