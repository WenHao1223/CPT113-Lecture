#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList() {
  head = nullptr;
  tail = nullptr;
}

DoublyLinkedList::~DoublyLinkedList() {
  Node * nodePtr = nullptr;

  while (head) {
    nodePtr = nodePtr->next;
    delete head;
    head = nodePtr;
  }

  head = nullptr;
  tail = nullptr;
}

void DoublyLinkedList::displayList () const {
  Node * nodePtr = nullptr;

  if (head) {
    nodePtr = head;
    while (nodePtr) {
      cout << nodePtr->val << endl;
      nodePtr = nodePtr->next;
    }
  } else {
    cout << "List is empty" << endl;
  }
}

void DoublyLinkedList::appendNode (int num) {
  Node * newNode = nullptr;
  newNode = new Node;
  newNode->val = num;
  newNode->prev = nullptr;
  newNode->next = nullptr;

  if (head) {
    Node * nodePtr = nullptr;
    nodePtr = head;

    while (nodePtr->next)
      nodePtr = nodePtr->next;

    newNode->prev = nodePtr;
    nodePtr->next = newNode;
  } else {
    head = newNode;
  }

  tail = newNode;
}

void DoublyLinkedList::insertNode (int num) {
  Node * newNode = nullptr;
  newNode = new Node;
  newNode->val = num;
  newNode->prev = nullptr;
  newNode->next = nullptr;

  if (head) {
    Node * nodePtr = nullptr;
    nodePtr = head;

    while (nodePtr && nodePtr->val < num) {
      nodePtr = nodePtr->next;
    }

    if (nodePtr == head) {
      // append at the head
      newNode->next = head;
      head->prev = newNode;
      head = newNode;
    } else if (nodePtr == nullptr) {
      // append at the end
      newNode->prev = tail;
      tail->next = newNode;
      tail = newNode;
    } else {
      nodePtr->prev->next = newNode;
      newNode->prev = nodePtr->prev;
      newNode->next = nodePtr;
      nodePtr->prev = newNode;
    }
  } else {
    head = newNode;
    tail = newNode;
  }
}

void DoublyLinkedList::deleteNode (int num) {
  Node * nodePtr = nullptr;

  if (head) {
    if (head->val == num) {
      nodePtr = head->next;
      nodePtr->prev = nullptr;
      delete head;
      head = nodePtr;
    } else {
      nodePtr = head;
      while (nodePtr && nodePtr->val < num) {
        nodePtr = nodePtr->next;
      }

      if (nodePtr) {
        nodePtr->prev->next = nodePtr->next;
        nodePtr->next->prev = nodePtr->prev;
        delete nodePtr;
      } else {
        cout << "Not found." << endl;
      }
    }
  } else {
    cout << "List is empty" << endl;
  }
}

int DoublyLinkedList::getHead () const {
  if (head) {
    return head->val;
  } else {
    return 0;
  }
}

int DoublyLinkedList::getTail () const {
  if (tail) {
    return tail->val;
  } else {
    return 0;
  }
}