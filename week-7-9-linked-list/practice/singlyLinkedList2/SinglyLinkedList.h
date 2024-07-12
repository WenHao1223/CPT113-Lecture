#ifndef SINGLYLINKEDLIST_H
#define SINGLULINKEDLIST_H

#include <iostream>
using namespace std;

template <class T>
class SinglyLinkedList {
  private:
    struct Node {
      T val;
      Node * next;
    };
    Node * head;
  public:
    SinglyLinkedList ();
    ~SinglyLinkedList ();

    void displayList () const;

    void appendNode (T val);
    void insertNode (T val);
    void deleteNode (T val);
};

#endif