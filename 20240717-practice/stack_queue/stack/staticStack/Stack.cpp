#include "Stack.h"

Stack::Stack (int size) {
  stackArray = new int [size];
  this->size = size;
  top = -1;
}

Stack::Stack (const Stack & obj) {
  if (obj.size > 0)
    stackArray = new int[obj.size];
  else
    stackArray = nullptr;

  size = obj.size;

  for (int i = 0; i < size; i++)
    stackArray[i] = obj.stackArray[i];

  top = obj.top;
}

Stack::~Stack () {
  delete stackArray;
}

void Stack::push (int num) {
  if (isFull())
    cout << "Stack is full." << endl;
  else {
    top++;
    stackArray[top] = num;
  }
}

void Stack::pop (int & num) {
  if (isEmpty())
    cout << "Stack is empty." << endl;
  else {
    num = stackArray[top];
    top--;
  }
}

bool Stack::isEmpty () const {
  return (top == -1);
}

bool Stack::isFull () const {
  return (top == size - 1);
}