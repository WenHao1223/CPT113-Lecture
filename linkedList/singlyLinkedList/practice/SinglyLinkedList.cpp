#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList () {
  head = nullptr;
}

SinglyLinkedList::~SinglyLinkedList () {
  Node *nodePtr = nullptr;
  while (head) {
    nodePtr = head->next;
    delete head;
    head = nodePtr;
  }
}

void SinglyLinkedList::displayList () const {
  Node *nodePtr = nullptr;
  if (head) {
    nodePtr = head;
    while (nodePtr) {
      cout << nodePtr->val << endl;
      nodePtr = nodePtr->next;
    }
  } else {
    cout << "Linked list is empty." << endl;
  }
}

void SinglyLinkedList::appendNode (int num) {
  Node *newNode = nullptr,
    *nodePtr = nullptr;

  newNode = new Node;
  newNode->val = num;
  newNode->next = nullptr;

  if (head) {
    nodePtr = head;
    while (nodePtr->next)
      nodePtr = nodePtr->next;

    nodePtr->next = newNode;
  } else {
    // empty list
    head = newNode;
  }
}

void SinglyLinkedList::insertNode (int num) {
  Node *newNode = nullptr,
    *nodePtr = nullptr,
    *prevNode = nullptr;

  newNode = new Node;
  newNode->val = num;
  newNode->next = nullptr;

  if (head) {
    nodePtr = head;
    while (nodePtr->next && nodePtr->val < num) {
      prevNode = nodePtr;
      nodePtr = nodePtr->next;
    }

    if (prevNode) {
      // insert at middle / end
      prevNode->next = newNode;
      newNode->next = nodePtr;
    } else {
      // insert at head
      newNode->next = head;
      head = newNode;
    }
  } else {
    // empty list
    head = newNode;
  }
}

void SinglyLinkedList::deleteNode (int num) {
  Node *nodePtr = nullptr,
    *prevNode = nullptr;

  if (head) {
    if (head->val == num) {
      // delete node at head
      nodePtr = head->next;
      delete head;
      head = nodePtr;
    } else {
      nodePtr = head;
      while (nodePtr && nodePtr->val != num) {
        prevNode = nodePtr;
        nodePtr = nodePtr->next;
      }

      if (nodePtr) {
        prevNode->next = nodePtr->next;
        delete nodePtr;
      } else {
        cout << "Not found" << endl;
      }
    }

  } else {
    cout << "Linked list is empty" << endl;
  }
}