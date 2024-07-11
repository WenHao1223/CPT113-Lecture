#include "Student.h"

Student::Student () {
  studentID = 0;
  school = "";
  desa = "";
}

Student::Student (int studentID, string school, string desa) {
  this->studentID = studentID;
  this->school = school;
  this->desa = desa;
}

void Student::print () const {
  cout << "Student ID: " << studentID << endl;
  cout << "School: " << school << endl;
  cout << "Desa: " << desa << endl;
}