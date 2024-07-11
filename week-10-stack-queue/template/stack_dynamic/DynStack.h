#ifndef DYNSTACK_H
#define DYNSTACK_H

#include <iostream>
using namespace std;

template <class T>
class DynStack {
  private:
    struct StackNode {
      T value;
      StackNode *next;
    };
    StackNode *top;
  public:
    DynStack () {
      top = nullptr;
    };
    ~DynStack();

    void push (T);
    void pop (T &);

    bool isEmpty ();
};

#endif