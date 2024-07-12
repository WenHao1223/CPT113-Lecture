#ifndef INTQUEUE_H
#define INTQUEUE_H

#include <iostream>
using namespace std;

class IntQueue {
  private:
    int * queueArray;
    int queueSize;
    int front;
    int rear;
    int numItems;
  public:
    IntQueue (int size);
    IntQueue (const IntQueue &);
    ~IntQueue ();

    void enqueue (int num);
    void dequeue (int & num);

    bool isEmpty () const;
    bool isFull () const;

    void clear ();
};

#endif