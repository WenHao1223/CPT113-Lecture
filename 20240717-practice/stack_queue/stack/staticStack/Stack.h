#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

class Stack {
  private:
    int * stackArray;
    int size;
    int top;
  public:
    Stack(int);
    Stack(const Stack &);
    ~Stack();

    void push (int);
    void pop (int &);

    bool isEmpty () const;
    bool isFull () const;
};

#endif