#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include <iostream>
using namespace std;

class SinglyLinkedList {
  private:
    struct Node {
      int val;
      Node *next;
    };
    Node *head;
  public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    void displayList() const;

    void appendNode(int);
    void insertNode(int);
    void deleteNode(int);
};

#endif