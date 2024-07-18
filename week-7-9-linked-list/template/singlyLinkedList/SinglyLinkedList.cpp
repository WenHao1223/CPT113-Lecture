#include "SinglyLinkedList.h"

template <class T>
SinglyLinkedList<T>::SinglyLinkedList () {
  head = nullptr;
}

template <class T>
SinglyLinkedList<T>::~SinglyLinkedList () {
  Node *nodePtr = nullptr;

  while (head) {
    nodePtr = head->next;
    delete head;
    head = nodePtr;
  }
}

template <class T>
void SinglyLinkedList<T>::displayList () const {
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

template <class T>
void SinglyLinkedList<T>::appendNode (T v) {
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

template <class T>
void SinglyLinkedList<T>::insertNode (T v) {
  Node *newNode = nullptr;
  newNode = new Node;
  newNode->val = v;
  newNode->next = nullptr;

  if (head) {
    Node *nodePtr = nullptr,
      *prevNode = nullptr;

    nodePtr = head;

    while (nodePtr && nodePtr->val < v) {
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

template <class T>
void SinglyLinkedList<T>::deleteNode (T v) {
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

template class SinglyLinkedList <int>;
template class SinglyLinkedList <short>;
template class SinglyLinkedList <float>;
template class SinglyLinkedList <double>;
template class SinglyLinkedList <char>;