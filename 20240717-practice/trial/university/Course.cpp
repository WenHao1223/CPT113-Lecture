#include "Course.h"

Course::Course () {
  cName = "";
  cCode = "";
  unit = 0;
  grade = "";
  pointVal = 0.0;
}

string Course::getName () const {
  return cName;
}

string Course::getCode () const {
  return cCode;
}

void Course::setGrade (string grade) {
  this->grade = grade;
  mapGrade2Point();
}

string Course::getGrade () const {
  return grade;
}

int Course::getUnit () const {
  return unit;
}

float Course::getPoint () const {
  return pointVal;
}

void Course::setCourse (string cName, string cCode, int unit) {
  this->cName = cName;
  this->cCode = cCode;
  this->unit = unit;
}

int Course::isEmpty () const {
  if (cName == "") {
    return 1;
  } else {
    return 0;
  }
}

void Course::mapGrade2Point () {
  if (grade == "A")
    pointVal = 4.00;
  else if (grade == "A-")
    pointVal = 3.67;
  else if (grade == "B+")
    pointVal = 3.33;
  else if (grade == "B")
    pointVal = 3.00;
  else if (grade == "B-")
    pointVal = 2.67;
  else if (grade == "C+")
    pointVal = 2.33;
  else if (grade == "C")
    pointVal = 2.00;
  else if (grade == "C-")
    pointVal = 1.67;
  else if (grade == "D+")
    pointVal = 1.33;
  else if (grade == "D")
    pointVal = 1.00;
  else if (grade == "D-")
    pointVal = 0.67;
  else
    pointVal = 0.00;
}