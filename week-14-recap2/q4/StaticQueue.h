#ifndef STATICQUEUE_H
#define STATICQUEUE_H

#include <iostream>
using namespace std;

template <class T>
class StaticQueue {
  private:
    T * queueArray;
    int queueSize;
    int front;
    int rear;
    int numOfItems;
  public:
    // constructor
    StaticQueue(int size);
    StaticQueue(const StaticQueue &);

    // destructor
    ~StaticQueue();

    // member functions
    void enqueue(T num);
    void dequeue(T & num);
    void display() const;

    bool isEmpty () const;
    bool isFull () const;
};

#endif