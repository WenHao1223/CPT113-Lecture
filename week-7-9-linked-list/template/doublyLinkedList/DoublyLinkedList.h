#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>
using namespace std;

template <class T>
class DoublyLinkedList {
  private:
    struct Node {
      T val;
      Node *prev;
      Node *next;
    };
    Node *head;
    Node *tail;
  public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void displayList();
    void appendNode(T);
    void insertNode(T);
    void deleteNode(T);

    T getHead() const;
    T getTail() const;
};

#endif