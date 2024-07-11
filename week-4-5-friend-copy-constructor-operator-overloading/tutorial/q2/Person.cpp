#include "Person.h"

Person::Person () {
  name = "";
  hometownState = "";
}

Person::Person (string name, string hometownState, string * schools) {
  this->name = name;
  this->hometownState = hometownState;
  this->schools = schools;
}

void Person::print (Student & student) const {
  cout << "Name: " << name << endl;
  cout << "Hometown state: " << hometownState << endl;

  cout << "Student ID: " << student.studentID << endl;
  cout << "School: " << student.school << endl;
  cout << "Desa: " << student.desa << endl;
  
  cout << "School: ";
  for (int i = 0; i < MAX_SCHOOL; i++) {
    cout << *(schools+i);

    if (i < MAX_SCHOOL - 1)
      cout << ", ";
  }
}
