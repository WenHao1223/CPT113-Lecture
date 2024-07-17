#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>
using namespace std;

class DoublyLinkedList {
  private:
    struct Node {
      int val;
      Node * prev;
      Node * next;
    };
    Node * head;
    Node * tail;
  public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void displayList() const;

    void appendNode(int num);
    void insertNode(int num);
    void deleteNode(int num);

    int getHead () const;
    int getTail () const;
};

#endif