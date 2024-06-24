#ifndef DYNINTSTACK_H
#define DYNINTSTACK_H

#include <iostream>
using namespace std;

class DynIntStack {
  private:
    struct StackNode {
      int value;
      StackNode *next;
    };
    StackNode *top;
  public:
    DynIntStack () {
      top = nullptr;
    };
    ~DynIntStack();

    void push (int);
    void pop (int &);

    bool isEmpty ();
};

#endif