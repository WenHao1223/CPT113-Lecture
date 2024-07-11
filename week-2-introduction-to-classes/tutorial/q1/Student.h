#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
  private:
    string name;
    int id;
    string desasiswa;
    short year;
    int semester;
    double cgpa;
  public:
    // constructor
    Student();
    Student(string name, int id, string desasiswa, short year, int semester, double cgpa);

    // destructor
    ~Student() {};

    // accessor
    string getName() const;
    int getId() const;
    string getDesasiswa() const;
    short getYear() const;
    int getSemester() const;
    double getCgpa() const;

    // mutator
    void setName (string name);
    void setId (int id);
    void setDesasiswa (string desasiswa);
    void setYear (short year);
    void setSemester (int semester);
    void setCgpa (double cgpa);

    // display method
    void display() const;
};

#endif