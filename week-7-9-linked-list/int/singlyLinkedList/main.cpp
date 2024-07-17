// g++ *.cpp -o main && main

#include <iostream>
using namespace std;

#include "SinglyLinkedList.h"

int main () {
  SinglyLinkedList linkedList;

  // display empty linked list
  linkedList.displayList();

  // append 1
  cout << "appending 1..." << endl;
  linkedList.appendNode(1);
  // append 2
  cout << "appending 2..." << endl;
  linkedList.appendNode(2);
  // display list
  cout << "displaying 1, 2 ..." << endl;
  linkedList.displayList();

  // delete node 1
  cout << "deleting 1..." << endl;
  linkedList.deleteNode(1);
  // not found node
  cout << "deleting 3..." << endl;
  linkedList.deleteNode(3);
  // display list
  cout << "displaying 2 ..." << endl;
  linkedList.displayList();
  // delete node 2
  linkedList.deleteNode(2);

  // delete empty list
  cout << "attempt to delete empty list" << endl;
  linkedList.deleteNode(2);
  // display list
  cout << "displaying empty list" << endl;
  linkedList.displayList();

  cout << "inserting 3..." << endl;
  linkedList.insertNode(3);
  cout << "inserting 2..." << endl;
  linkedList.insertNode(2);
  // display list
  cout << "displaying 2, 3..." << endl;
  linkedList.displayList();

  return 0;
}