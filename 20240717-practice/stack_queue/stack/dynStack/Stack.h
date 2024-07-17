#ifndef DYNSTACK_H
#define DYNSTACK_H

#include <iostream>
using namespace std;

class DynStack {
  private:
    struct StackNode {
      int val;
      StackNode * next;
    };
    StackNode * top;
  public:
    DynStack ();
    ~DynStack ();

    void push (int);
    void pop (int &);

    bool isEmpty () const;

};

#endif