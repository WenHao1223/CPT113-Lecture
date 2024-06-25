#include "DynIntStack.h"

DynIntStack::DynIntStack () {
  top = nullptr;
}

DynIntStack::~DynIntStack () {
  StackNode *nodePtr = nullptr,
    *nextNode = nullptr;
  
  nodePtr = top;

  while(nodePtr) {
    nextNode = nodePtr->next;
    delete nodePtr;
    nodePtr = nextNode;
  }
}

void DynIntStack::push (int num) {
  StackNode *newNode = nullptr,
    *nodePtr = nullptr;

  newNode = new StackNode;
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
  StackNode *temp = nullptr;

  if (isEmpty())
    cout << "stack is empty" << endl;
  else {
    num = top->val;
    temp = top->next;
    delete top;
    top = temp;
  }
}

bool DynIntStack::isEmpty() {
  bool status;

  if (!top)
    status = true;
  else
    status = false;

  return status;
}