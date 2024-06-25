#ifndef INTSTACK_H
#define INTSTACK_H

#include <iostream>
using namespace std;

class IntStack {
  private:
    int * stackArray;
    int stackSize;
    int top;
  public:
    IntStack(int);
    IntStack (const IntStack &);
    ~IntStack();

    void push(int);
    void pop(int &);

    bool isEmpty() const;
    bool isFull() const;
};

#endif