#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

#include "Person.h"
#include "Course.h"

class Student : public Person {
  private:
    int ID;
    Course * courses;
  public:
    Student();
    Student(string, string, int, int);

    void printCourse() const;

    void addCourse (string, string, int);
    void addResult ();

    int searchCourse (string) const;
    int numCourse () const;

    void printFullReport ();
    float calcGPA ();
};

#endif