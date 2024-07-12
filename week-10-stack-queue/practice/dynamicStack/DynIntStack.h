#ifndef DYNINTSTACK_H
#define DYNINTSTACK_H

#include <iostream>
using namespace std;

class DynIntStack {
  private:
    struct StackNode {
      int val;
      StackNode * next;
    };
    StackNode * top;
  public:
    DynIntStack();
    ~DynIntStack();

    void push (int val);
    void pop (int & val);

    bool isEmpty () const;
};

#endif