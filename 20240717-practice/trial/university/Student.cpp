#include "Student.h"

Student::Student () : Person ("", "", 0) {
  ID = 0;
  courses = new Course [5];
}

Student::Student (string name, string state, int entryType, int ID) : Person (name, state, entryType) {
  this->ID = ID;
  courses = new Course [5];
}

void Student::printCourse () const {
  for (int i = 0; i < 5; i++) {
    if (!courses[i].isEmpty()) {
      cout << courses[i].getName() << "\t" << courses[i].getCode() << "\t" << courses[i].getUnit() << " units\t" << courses[i].getPoint() << endl;
    }
  }
  cout << endl;
}

void Student::addCourse (string cName, string cCode, int unit) {
  for (int i = 0; i < 5; i++) {
    if (courses[i].isEmpty()) {
      courses[i].setCourse(cName, cCode, unit);
      break;
    }
  }
}

void Student::addResult () {
  string cCode,
    grade;
  cout << "Input the course code: ";
  cin >> cCode;
  cin.ignore();

  if (!searchCourse(cCode)) {
    cout << "Course not found" << endl;
    return;
  }

  for (int i = 0; i < 5; i++) {
    if (courses[i].getCode() == cCode) {
      cout << "Input the grade (A / A- / B+ / B / B- / C+ / C / C- / D+ / D / D- / F): ";
      // should do input validation
      cin >> grade;
      courses[i].setGrade(grade);
    }
  }
}

int Student::searchCourse (string cCode) const {
  for (int i = 0; i < 5; i++) {
    if (cCode == courses[i].getCode()) {
      return 1;
    }
  }

  return 0;
}

int Student::numCourse () const {
  int total = 0;
  for (int i = 0; i < 5; i++) {
    if (!courses[i].isEmpty())
      total += 1;
  }

  return total;
}

void Student::printFullReport () {
  for (int i = 0; i < 5; i++) {
    if (!courses[i].isEmpty() && courses[i].getGrade() == "") {
      cout << courses[i].getName() << "(" << courses[i].getCode() << ")" << "hasn't set with grade." << endl;
      return;
    }
  }

  cout << "Student's details" << endl;
  cout << "Name: " << getName() << endl;
  cout << "State: " << getState() << endl;
  cout << "Entry type: " << getType() << endl;
  cout << endl;

  cout << "Courses taken" << endl;
  cout << "Courses taken: " << numCourse() << endl;
  for (int i = 0; i < 5; i++) {
    if (!courses[i].isEmpty())
      cout << courses[i].getName() << "\t" << courses[i].getCode() << "\t" << courses[i].getUnit() << " units\t" << courses[i].getGrade() << "\t" << courses[i].getPoint() << endl;
  }
  cout << endl;

  cout << "CGPA: " << calcGPA() << endl;
}

float Student::calcGPA () {
  float totalPoint = 0.00;
  int totalUnit = 0;
  for (int i = 0; i < 5; i++) {
    if (!courses[i].isEmpty()) {
      totalPoint += courses[i].getPoint() * courses[i].getUnit();
      totalUnit += courses[i].getUnit();
    }
  }

  return totalPoint / totalUnit;
}