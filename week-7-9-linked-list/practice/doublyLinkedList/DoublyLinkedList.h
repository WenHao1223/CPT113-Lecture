#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>
using namespace std;

template <class T>
class DoublyLinkedList {
  private:
    struct Node {
      T val;
      Node * next;
      Node * prev;
    };
    Node * head;
    Node * tail;
  public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void displayList () const;
    void appendNode (T val);
    void insertNode (T val);
    void deleteNode (T val);

    T getHead() const;
    T getTail() const;
};

#endif