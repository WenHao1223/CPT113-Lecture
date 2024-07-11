#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
  private:
    int studentID;
    string school;
    string desa;
  public:
    // constructor
    Student ();
    Student (int studentID, string school, string desa);
    
    // destructor
    ~Student () {};

    // member variables
    void print() const;

    // friend class
    friend class Person;
};

#endif