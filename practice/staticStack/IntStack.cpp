#include "IntStack.h"

IntStack::IntStack(int s) {
  stackArray = new int [s];
  stackSize = s;
  top = -1;
}

IntStack::IntStack (const IntStack & obj) {
  if (obj.stackSize > 0)
    stackArray = new int [obj.stackSize];
  else
    stackArray = nullptr;

  stackSize = obj.stackSize;
  top = obj.top;

  for (int i = 0; i < obj.stackSize; i++)
    stackArray[i] = obj.stackArray[i];
}

IntStack::~IntStack () {
  delete [] stackArray;
}

void IntStack::push (int num) {
  if (isFull()) {
    cout << "The stack is full." << endl;
  } else {
    top++;
    stackArray[top] = num;
  }
}

void IntStack::pop (int & num) {
  if (isEmpty()) {
    cout << "The stack is empty." << endl;
  } else {
    num = stackArray[top];
    top--;
  }
}

bool IntStack::isEmpty () const {
  bool status;
  if (top == -1)
    status = true;
  else
    status = false;

  return status;
}

bool IntStack::isFull () const {
  bool status;
  if (top == stackSize - 1)
    status = true;
  else
    status = false;
    
  return status;
}