#include "DynIntStack.h"

DynIntStack::~DynIntStack() {
  StackNode *nodePtr = nullptr,
    *nextNode = nullptr;

  nodePtr = top;

  while (nodePtr != nullptr) {
    nextNode = nodePtr->next;
    delete nodePtr;
    nodePtr = nextNode;
  }
}

void DynIntStack::push (int num) {
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

void DynIntStack::pop (int &num) {
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

bool DynIntStack::isEmpty () {
  bool status;

  if (!top)
    status = true;
  else
    status = false;

  return status;
}