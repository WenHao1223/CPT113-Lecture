#include "Stack.h"

DynStack::DynStack () {
  top = nullptr;
}

DynStack::~DynStack () {
  StackNode * nodePtr = nullptr;

  while (top) {
    nodePtr = top->next;
    delete top;
    top = nodePtr;
  }
}

void DynStack::push (int num) {
  StackNode * newNode;
  newNode = new StackNode;
  newNode->val = num;

  if (!isEmpty()) {
    newNode->next = top;
    top = newNode;
  } else {
    newNode->next = nullptr;
    top = newNode;
  }
}

void DynStack::pop (int & num) {
  if (isEmpty()) {
    cout << "List is empty" << endl;
  } else {
    StackNode * nodePtr = nullptr;
    num = top->val;

    nodePtr = top->next;
    delete top;
    top = nodePtr;
  }
}

bool DynStack::isEmpty () const {
  return (top == nullptr);
}