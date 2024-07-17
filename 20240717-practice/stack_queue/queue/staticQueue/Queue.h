#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

class Queue {
  private:
    int * queueArray;
    int size;
    int front;
    int rear;
    int numOfItems;
  public:
    Queue (int);
    Queue (const Queue &);
    ~Queue ();

    void enqueue (int);
    void dequeue (int &);

    bool isEmpty () const;
    bool isFull () const;

    void clear ();
};

#endif