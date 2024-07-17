// g++ *.cpp -o main && main

#include <iostream>
using namespace std;

#include "SinglyLinkedList.h"

int main () {
  SinglyLinkedList <int> intLinkedList;

  // display empty linked list
  intLinkedList.displayList();

  // append 1
  cout << "appending 1..." << endl;
  intLinkedList.appendNode(1);
  // append 2
  cout << "appending 2..." << endl;
  intLinkedList.appendNode(2);
  // display list
  cout << "displaying 1, 2 ..." << endl;
  intLinkedList.displayList();

  // delete node 1
  cout << "deleting 1..." << endl;
  intLinkedList.deleteNode(1);
  // not found node
  cout << "deleting 3..." << endl;
  intLinkedList.deleteNode(3);
  // display list
  cout << "displaying 2 ..." << endl;
  intLinkedList.displayList();
  // delete node 2
  intLinkedList.deleteNode(2);

  // delete empty list
  cout << "attempt to delete empty list" << endl;
  intLinkedList.deleteNode(2);
  // display list
  cout << "displaying empty list" << endl;
  intLinkedList.displayList();

  cout << "inserting 3..." << endl;
  intLinkedList.insertNode(3);
  cout << "inserting 2..." << endl;
  intLinkedList.insertNode(2);
  // display list
  cout << "displaying 2, 3..." << endl;
  intLinkedList.displayList();

  cout << endl << endl;

  SinglyLinkedList <double> doubleLinkedList;

  // display empty linked list
  doubleLinkedList.displayList();

  // append 1
  cout << "appending 1..." << endl;
  doubleLinkedList.appendNode(0.5);
  // append 2
  cout << "appending 2..." << endl;
  doubleLinkedList.appendNode(1.0);
  // display list
  cout << "displaying 0.5, 1.0 ..." << endl;
  doubleLinkedList.displayList();

  // delete node 1
  cout << "deleting 0.5..." << endl;
  doubleLinkedList.deleteNode(0.5);
  // not found node
  cout << "deleting 1.5 ..." << endl;
  doubleLinkedList.deleteNode(1.5);
  // display list
  cout << "displaying 1.0 ..." << endl;
  doubleLinkedList.displayList();
  // delete node 2
  doubleLinkedList.deleteNode(1.0);

  // delete empty list
  cout << "attempt to delete empty list" << endl;
  doubleLinkedList.deleteNode(1.0);
  // display list
  cout << "displaying empty list" << endl;
  doubleLinkedList.displayList();

  cout << "inserting 1.5..." << endl;
  doubleLinkedList.insertNode(1.5);
  cout << "inserting 1.0..." << endl;
  doubleLinkedList.insertNode(1.0);
  // display list
  cout << "displaying 1.0, 1.5..." << endl;
  doubleLinkedList.displayList();

  return 0;
}