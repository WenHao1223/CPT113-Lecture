#include "DynIntStack.h"

DynIntStack::~DynIntStack () {
  StackNode *nodePtr = nullptr,
    *nextPtr = nullptr;

  nodePtr = top;
  while (!isEmpty()) {
    nextPtr = nodePtr->next;
    delete nodePtr;
    nodePtr = nextPtr;
  }
}

void DynIntStack::push (int num) {
  StackNode *newNode = new StackNode;
  newNode->val = num;

  if (isEmpty()) {
    top = newNode;
    newNode->next = nullptr;
  } else {
    newNode->next = top;
    top = newNode;
  }
}

void DynIntStack::pop (int & num) {
  StackNode *temp = new StackNode;
  
  if (isEmpty())
    cout << "Stack is empty.\n";
  else {
    num = top->val;
    temp = top->next;
    delete top;
    top = temp;
  }
}

bool DynIntStack::isEmpty () {
  bool status;

  if (!top)
    status = true;
  else
    status = false;

  return status;
}