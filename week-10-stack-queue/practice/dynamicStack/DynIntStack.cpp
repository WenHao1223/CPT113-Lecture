#include "DynIntStack.h"

DynIntStack::DynIntStack () {
  top = nullptr;
}

DynIntStack::~DynIntStack () {
  StackNode * nodePtr = nullptr;

  while (top) {
    nodePtr = top->next;
    delete top;
    top = nodePtr;
  }
}

void DynIntStack::push (int val) {
  StackNode * newNode = nullptr;
  newNode = new StackNode;
  newNode->val = val;

  if (isEmpty()) {
    newNode->next = nullptr;
    top = newNode;
  } else {
    newNode->next = top;
    top = newNode;
  }
}

void DynIntStack::pop (int & val) {
  StackNode * nodePtr = nullptr;

  if (isEmpty())
    cout << "Stack is empty.\n";
  else {
    val = top->val;
    nodePtr = top->next;
    delete top;
    top = nodePtr;
  }
}

bool DynIntStack::isEmpty () const {
  return (top == nullptr);
}