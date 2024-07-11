#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>
using namespace std;

class DoublyLinkedList {
  private:
    struct Node {
      int val;
      Node *prev;
      Node *next;
    };
    Node *head;
    Node *tail;
  public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void displayList();
    void appendNode(int);
    void insertNode(int);
    void deleteNode(int);
};

#endif