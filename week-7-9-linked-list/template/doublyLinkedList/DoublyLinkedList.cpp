#include "DoublyLinkedList.h"

template <class T>
DoublyLinkedList<T>::DoublyLinkedList () {
  head = nullptr;
  tail = nullptr;
}

template <class T>
DoublyLinkedList<T>::~DoublyLinkedList () {
  Node *nodePtr = nullptr;

  while (head) {
    nodePtr = head->next;
    delete head;
    head = nodePtr;
  }

  head = nullptr;
  tail = nullptr;
}

template <class T>
void DoublyLinkedList<T>::displayList () {
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

template <class T>
void DoublyLinkedList<T>::appendNode (T num) {
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
    tail = newNode;
  } else {
    // list is empty
    head = newNode;
    tail = newNode;
  }
}

template <class T>
void DoublyLinkedList<T>::insertNode (T num) {
  Node *newNode = nullptr,
    *nodePtr = nullptr;

  newNode = new Node;
  newNode->val = num;
  newNode->prev = nullptr;
  newNode->next = nullptr;

  if (head) {
    nodePtr = head;
    while (nodePtr && nodePtr->val < num)
      nodePtr = nodePtr->next;

    if (nodePtr == head) {
      // insert at head
      newNode->next = head;
      head->prev = newNode;
      head = newNode;
    } else if (nodePtr == nullptr) {
      // append at the end
      newNode->prev = tail;
      tail->next = newNode;
      tail = newNode;
    } else {
      // insert at middle
      nodePtr->prev->next = newNode;
      newNode->prev = nodePtr->prev;
      newNode->next = nodePtr;
      nodePtr->prev = newNode;
    }
  } else {
    // list is empty
    head = newNode;
    tail = newNode;
  }
}

template <class T>
void DoublyLinkedList<T>::deleteNode (T num) {
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
        nodePtr->next->prev = nodePtr->prev;
        delete nodePtr;
      } else {
        cout << "Not found." << endl;
      }
    }

  } else {
    cout << "Linked list is empty." << endl;
  }
}

template <class T>
T DoublyLinkedList<T>::getHead() const {
  if (head) {
    return head->val;
  } else {
    return T();
  }
}

template <class T>
T DoublyLinkedList<T>::getTail() const {
  if (tail) {
    return tail->val;
  } else {
    return T();
  }
}

template class DoublyLinkedList <int>;
template class DoublyLinkedList <short>;
template class DoublyLinkedList <float>;
template class DoublyLinkedList <double>;
template class DoublyLinkedList <char>;