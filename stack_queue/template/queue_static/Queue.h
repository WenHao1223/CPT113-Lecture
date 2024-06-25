#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

template <class T>
class Queue {
  private:
    T *queueArray;
    int queueSize;
    int front;
    int rear;
    int numItems;
  public:
    Queue(int);
    Queue(const Queue &);
    ~Queue();

    void enqueue(T);
    void dequeue(T &);

    bool isEmpty() const;
    bool isFull() const;
    
    void clear();
};

#endif