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

void SinglyLinkedList::appendNode (int v) {
  Node *newNode = nullptr;
  newNode = new Node;
  newNode->val = v;
  newNode->next = nullptr;

  if (head) {
    Node *nodePtr = nullptr;
    nodePtr = head;

    while (nodePtr->next)
      nodePtr = nodePtr->next;

    nodePtr->next = newNode;
  } else {
    head = newNode;
  }
}

void SinglyLinkedList::insertNode (int v) {
  Node *newNode = nullptr;
  newNode = new Node;
  newNode->val = v;
  newNode->next = nullptr;

  if (head) {
    Node *nodePtr = nullptr,
      *prevNode = nullptr;

    nodePtr = head;

    while (nodePtr->next && nodePtr->val < v) {
      prevNode = nodePtr;
      nodePtr = nodePtr->next;
    }

    if (prevNode) {
      prevNode->next = newNode;
      newNode->next = nodePtr;
    } else {
      // insert at head
      newNode->next = head;
      head = newNode;
    }
  
  } else {
    head = newNode; // linked list is empty
  }
}

void SinglyLinkedList::deleteNode (int v) {
  if (head) {
    Node *nodePtr = nullptr,
      *prevNode = nullptr;

    if (head->val == v) {
      // node to delete is head
      nodePtr = head->next;
      delete head;
      head = nodePtr;
    } else {
      nodePtr = head;
      // node to delete is at the middle / last
      while (nodePtr && nodePtr->val != v) {
        prevNode = nodePtr;
        nodePtr = nodePtr->next;
      }

      if (nodePtr) {
        prevNode->next = nodePtr->next;
        delete nodePtr;
      } else {
        cout << "Not found." << endl;
      }
    }
  } else {
    cout << "Linked list is empty." << endl;
  }
}