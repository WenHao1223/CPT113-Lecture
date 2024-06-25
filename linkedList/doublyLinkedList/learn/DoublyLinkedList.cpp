#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList () {
  head = nullptr;
  tail = nullptr;
}

DoublyLinkedList::~DoublyLinkedList () {
  Node *nodePtr = nullptr,
    *temp = nullptr;

  nodePtr = head;
  while (nodePtr) {
    temp = nodePtr->next;
    delete nodePtr;
    head = temp;
  }
}

void DoublyLinkedList::displayList () {
  Node *nodePtr = nullptr;

  if (head) {
    nodePtr = head;
    while (nodePtr) {
      cout << nodePtr->val << endl;
      nodePtr = nodePtr->next;
    }
  } else {
    cout << "Linked list is empty" << endl;
  }

}

void DoublyLinkedList::appendNode (int num) {
  Node *newNode = nullptr,
    *nodePtr = nullptr;
  newNode = new Node;
  newNode->val = num;
  newNode->prev = nullptr;
  newNode->next = nullptr;

  if (head) {
    nodePtr = head;
    while (nodePtr->next) {
      nodePtr = nodePtr->next;
    }
    nodePtr->next = newNode;
    newNode->prev = nodePtr;    
  } else {
    // list is empty
    head = newNode;
    tail = newNode;
  }
}

void DoublyLinkedList::insertNode (int num) {
  Node *newNode = nullptr,
    *nodePtr = nullptr;

  newNode = new Node;
  newNode->val = num;
  newNode->prev = nullptr;
  newNode->next = nullptr;

  if (head) {
    nodePtr = head;
    while (nodePtr->next && nodePtr->val < num)
      nodePtr = nodePtr->next;

    if (nodePtr->prev) {
      // insert at middle / last
      nodePtr->prev->next = newNode;
      newNode->prev = nodePtr->prev;
      newNode->next = nodePtr;
      nodePtr->prev = newNode;
    } else {
      // insert at head
      newNode->next = head;
      head->prev = newNode;
      head = newNode;
    }
  } else {
    // list is empty
    head = newNode;
    tail = newNode;
  }
}

void DoublyLinkedList::deleteNode (int num) {
  Node *nodePtr = nullptr;

  if (head) {
    if (head->val == num) {
      // node to delete is head
      nodePtr = head->next;
      delete head;
      head = nodePtr;
    } else {
      nodePtr = head;
      // node to delete is at the middle / last
      while (nodePtr && nodePtr->val != num)
        nodePtr = nodePtr->next;

      if (nodePtr) {
        nodePtr->prev->next = nodePtr->next;
        delete nodePtr;
      } else {
        cout << "Not found." << endl;
      }
    }

  } else {
    cout << "Linked list is empty." << endl;
  }
}