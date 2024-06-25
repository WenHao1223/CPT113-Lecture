#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

template <class T>
class Stack {
  private:
    T *stackArray;
    int stackSize;
    int top;

  public:
    Stack (int);
    Stack (const Stack &);

    ~Stack();

    void push (T);
    void pop (T &);

    bool isFull () const;
    bool isEmpty () const;
};

#endif