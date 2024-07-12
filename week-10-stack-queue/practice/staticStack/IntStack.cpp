#include "IntStack.h"

IntStack::IntStack (int size) {
  stackArray = new int [size];
  stackSize = size;
  top = -1;
}

IntStack::IntStack (const IntStack & obj) {
  if (obj.stackSize > 0)
    stackArray = new int [obj.stackSize];
  else
    stackArray = nullptr;

  stackSize = obj.stackSize;
  top = obj.top;

  for (int i = 0; i < stackSize; i++)
    stackArray[i] = obj.stackArray[i];
}

IntStack::~IntStack () {
  delete [] stackArray;
}

void IntStack::push (int num) {
  if (isFull())
    cout << "Stack is full." << endl;
  else {
    top++;
    stackArray[top] = num;
  }
}

void IntStack::pop (int & num) {
  if (isEmpty())
    cout << "Stack is empty." << endl;
  else {
    num = stackArray[top];
    top--;
  }
}

bool IntStack::isEmpty () const {
  return (top == -1);
}

bool IntStack::isFull () const {
  return (top == stackSize - 1);
}