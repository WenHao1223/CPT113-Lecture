#ifndef DYNQUEUE_H
#define DYNQUEUE_H

#include <iostream>
using namespace std;

template <class T>
class DynQueue {
  private:
    struct QueueNode {
      T value;
      QueueNode *next;
    };
    QueueNode *front;
    QueueNode *rear;
    int numItems;
  public:
    DynQueue();
    ~DynQueue();

    void enqueue(T);
    void dequeue(T &);
    bool isEmpty() const;
    void clear();
};

#endif