#ifndef DYNINTQUEUE_H
#define DYNINTQUEUE_H

#include <iostream>
using namespace std;

class DynIntQueue {
  private:
    struct QueueNode {
      int val;
      QueueNode * next;
    };
    QueueNode * front;
    QueueNode * rear;
    int numItems;
  public:
    DynIntQueue();
    ~DynIntQueue();

    void enqueue (int num);
    void dequeue (int & num);

    bool isEmpty () const;

    void clear();
};

#endif