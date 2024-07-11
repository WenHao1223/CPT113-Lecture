#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

#include "Student.h"

class Person {
  private:
    const int static MAX_SCHOOL = 3;

    string name;
    string hometownState;
    string * schools;
  public:
    // constructor
    Person ();
    Person (string name, string hometownState, string * schools);

    // destructor
    ~Person() {};

    // member functions
    void print(Student & student) const;
};

#endif