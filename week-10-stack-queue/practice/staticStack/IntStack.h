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
    IntStack(int size);
    IntStack(const IntStack &);

    ~IntStack();

    void push (int num);
    void pop (int & num);

    bool isEmpty() const;
    bool isFull() const;
};

#endif