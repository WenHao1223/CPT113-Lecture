#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_h

#include <iostream>
using namespace std;

template <class T>
class SinglyLinkedList {
  private:
    struct Node {
      T val;
      Node *next;
    };
    Node *head;
  public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    void displayList() const;

    void appendNode(T);
    void insertNode(T);
    void deleteNode(T);
};

#endif