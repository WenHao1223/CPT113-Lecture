#ifndef COURSE_H
#define COURSE_H

#include <iostream>
using namespace std;

class Course {
  private:
    string cName;
    string cCode;
    int unit;
    string grade;
    float pointVal;
  public:
    Course();

    string getName() const;
    string getCode() const;

    void setGrade (string);
    string getGrade () const;

    int getUnit () const;
    float getPoint () const;

    void setCourse (string, string, int);

    int isEmpty () const;
    void mapGrade2Point ();
};

#endif