#ifndef DYNINTQUEUE_H
#define DYNINTQUEUE_H

#include <iostream>
using namespace std;

class DynIntQueue {
  private:
    struct QueueNode {
      int value;
      QueueNode* next;
    };
    QueueNode *front;
    QueueNode *rear;
    int numItems;
  public:
    DynIntQueue();
    ~DynIntQueue();

    void enqueue(int);
    void dequeue(int &);

    bool isEmpty() const;

    void clear();
};

#endif