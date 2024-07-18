#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList() {
  head = nullptr;
}

SinglyLinkedList::~SinglyLinkedList() {
  Node * nodePtr = nullptr;

  while (head) {
    nodePtr = head->next;
    delete head;
    head = nodePtr;
  }
}

void SinglyLinkedList::displayList() const {
  Node * nodePtr = nullptr;

  if (head) {
    nodePtr = head;
    while (nodePtr) {
      cout << nodePtr->val << endl;
      nodePtr = nodePtr->next;
    }
  } else
    cout << "List is empty" << endl;
}

void SinglyLinkedList::appendNode (int num) {
  Node * newNode = nullptr;
  newNode = new Node;
  newNode->val = num;
  newNode->next = nullptr;

  if (head) {
    Node * nodePtr = nullptr;
    nodePtr = head;

    while (nodePtr->next)
      nodePtr = nodePtr->next;

    nodePtr->next = newNode;
  } else {
    head = newNode;
  }
}

void SinglyLinkedList::insertNode (int num) {
  Node * newNode = nullptr;
  newNode = new Node;
  newNode->val = num;
  newNode->next= nullptr;

  if (head) {
    Node * nodePtr = nullptr,
      * prevNode = nullptr;

    nodePtr = head;

    while (nodePtr && nodePtr->val < num) {
      nodePtr = nodePtr->next;
      prevNode = nodePtr;
    }

    if (prevNode) {
      newNode->next = nodePtr;
      prevNode->next = newNode;
    } else {
      newNode->next = head;
      head = newNode;
    }
  } else {
    head = newNode;
  }
}

void SinglyLinkedList::deleteNode (int num) {
  if (head) {
    Node * nodePtr = nullptr,
      * prevNode = nullptr;

    if (head->val == num) {
      nodePtr = head->next;
      delete head;
      head = nodePtr;
    } else {
      nodePtr = head;

      while (nodePtr && nodePtr->val != num) {
        nodePtr = nodePtr->next;
        prevNode =  nodePtr;
      }

      if (nodePtr) {
        prevNode->next = nodePtr->next;
        delete nodePtr;
      } else {
        cout << "Not found" << endl;
      }
    }
  } else {
    cout << "List is empty" << endl;
  }
}