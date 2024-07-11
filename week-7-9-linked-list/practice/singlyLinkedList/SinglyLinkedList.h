#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include <iostream>
using namespace std;

class SinglyLinkedList {
  private:
    struct Node {
      int val;
      Node * next;
    };
    Node * head;
  public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    void displayList();

    void appendNode(int val);
    void insertNode(int val);
    void deleteNode(int val);
};

#endif