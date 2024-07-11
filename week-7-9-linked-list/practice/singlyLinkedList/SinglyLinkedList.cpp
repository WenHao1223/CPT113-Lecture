#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList () {
  head = nullptr;
}

SinglyLinkedList::~SinglyLinkedList () {
  Node * nodePtr = nullptr;

  while (head) {
    nodePtr = head->next;
    delete head;
    head = nodePtr;
  }
}

void SinglyLinkedList::displayList () {
  Node * nodePtr = nullptr;

  if (!head) {
    cout << "List is empty." << endl;
    return;
  }

  nodePtr = head;
  while (nodePtr) {
    cout << nodePtr->val << endl;
    nodePtr = nodePtr->next;
  }
}

void SinglyLinkedList::appendNode (int val) {
  Node * newNode = nullptr,
    * nodePtr = nullptr;

  newNode = new Node;
  newNode->val = val;
  newNode->next = nullptr;

  if (head) {
    nodePtr = head;
    while (nodePtr->next)
      nodePtr = nodePtr->next;

    nodePtr->next = newNode;
  } else {
    // list is empty
    // append at the head
    head = newNode;
  }
}

void SinglyLinkedList::insertNode (int val) {
  Node * newNode = nullptr,
    * nodePtr = nullptr,
    * prevNode = nullptr;

  newNode = new Node;
  newNode->val = val;
  newNode->next = nullptr;

  if (head) {
    nodePtr = head;
    while (nodePtr->next && nodePtr->val < val) {
      nodePtr = nodePtr->next;
      prevNode = nodePtr;
    }
    
    if (prevNode) {
      prevNode->next = newNode;
      newNode->next = nodePtr;
    } else {
      // append in front as val is smaller than nodePtr's val
      newNode->next = head;
      head = newNode;
    }

  } else {
    // list is empty
    // append at the head
    head = newNode;
  }
}

void SinglyLinkedList::deleteNode (int val) {
  Node * nodePtr = nullptr,
    * prevNode = nullptr;

  if (head) {
    if (head->val == val) {
      // value found in the head
      nodePtr = head->next;
      delete head;
      head = nodePtr;
    } else {
      nodePtr = head;
      while (nodePtr && nodePtr->val != val) {
        nodePtr = nodePtr->next;
        prevNode = nodePtr;
      }

      if (nodePtr) {
        prevNode->next = nodePtr->next;
        delete nodePtr;
      } else {
        cout << "Value not found." << endl;
      }
    }

  } else {
    cout << "List is empty." << endl;
  }
}