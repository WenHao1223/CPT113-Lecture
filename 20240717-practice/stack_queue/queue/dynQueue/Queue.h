#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

class DynQueue {
  private:
    struct QueueNode {
      int val;
      QueueNode * next;
    };
    QueueNode * front;
    QueueNode * rear;
    int numItems;
  public:
    DynQueue();
    ~DynQueue();

    void enqueue (int);
    void dequeue (int &);

    bool isEmpty () const;

    void clear(); 
};

#endif