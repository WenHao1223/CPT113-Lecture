#include "SinglyLinkedList.h"

template <class T>
SinglyLinkedList<T>::SinglyLinkedList () {
  head = nullptr;
}

template <class T>
SinglyLinkedList<T>::~SinglyLinkedList () {
  Node * nodePtr = nullptr;
  if (head) {
    nodePtr = head;
    while (nodePtr) {
      nodePtr = head->next;
      delete head;
      head = nodePtr;
    }
  }
}

template <class T>
void SinglyLinkedList<T>::displayList () const {
  Node * nodePtr = nullptr;

  if (head) {
    nodePtr = head;
    while (nodePtr) {
      cout << nodePtr->val << endl;
      nodePtr = nodePtr->next;
    }
  } else {
    cout << "List is empty." << endl;
  }
}

template <class T>
void SinglyLinkedList<T>::appendNode (T val) {
  Node * newNode = nullptr;
  newNode = new Node;
  newNode->val = val;
  newNode->next = nullptr;

  if (head) {
    Node * nodePtr = nullptr;
    nodePtr = head;
    while (nodePtr->next)
      nodePtr = nodePtr->next;
    
    nodePtr->next = newNode;
  } else {
    // append at the head as list is empty
    head = newNode;
  }
}

template <class T>
void SinglyLinkedList<T>::insertNode (T val) {
  Node * newNode = nullptr;
  newNode = new Node;
  newNode->val = val;
  
  if (head) {
    Node * nodePtr = nullptr,
      * prevNode = nullptr;

    nodePtr = head;
    while (nodePtr->next && nodePtr->val < val) {
      nodePtr = nodePtr->next;
      prevNode = nodePtr;
    }

    if (prevNode) {
      newNode->next = prevNode->next;
      prevNode->next = newNode;
    } else {
      // val < first node's value
      newNode->next = head;
      head = newNode;
    }
  } else {
    // append at the head as list is empty
    newNode->next = nullptr;
    head = newNode;
  }
}

template <class T>
void SinglyLinkedList<T>::deleteNode (T val) {
  Node * nodePtr = nullptr;

  if (head) {
    if (head->val == val) {
      nodePtr = head->next;
      delete head;
      head = nodePtr;
    } else {
      Node * prevNode = nullptr;

      nodePtr = head;
      while (nodePtr && nodePtr->val != val) {
        nodePtr = nodePtr->next;
        prevNode = nodePtr;
      }

      if (prevNode) {
        prevNode->next = nodePtr->next;
        delete nodePtr;
      } else {
        cout << "Not found." << endl;
      }
    }
  } else {
    cout << "List is empty." << endl;
  }
}

template class SinglyLinkedList <int>;
template class SinglyLinkedList <short>;
template class SinglyLinkedList <float>;
template class SinglyLinkedList <double>;
template class SinglyLinkedList <char>;