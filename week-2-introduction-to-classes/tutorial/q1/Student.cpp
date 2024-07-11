#include "Student.h"

Student::Student() {
  name = "";
  id = 0;
  desasiswa = "";
  year = 0;
  semester = 0;
  cgpa = 0.0;
}

Student::Student(string name, int id, string desasiswa, short year, int semester, double cgpa) {
  this->name = name;
  this->id = id;
  this->desasiswa = desasiswa;
  this->year = year;
  this->semester = semester;
  this->cgpa = cgpa;
}

string Student::getName() const {
  return name;
}

int Student::getId() const {
  return id;
}

string Student::getDesasiswa() const {
  return desasiswa;
}

short Student::getYear() const {
  return year;
}

int Student::getSemester() const {
  return semester;
}

double Student::getCgpa() const {
  return cgpa;
}

void Student::setName (string name) {
  this->name = name;
}

void Student::setId (int id) {
  this->id = id;
}

void Student::setDesasiswa (string desasiswa) {
  this->desasiswa = desasiswa;
}

void Student::setYear (short year) {
  this->year = year;
}

void Student::setSemester (int semester) {
  this->semester = semester;
}

void Student::setCgpa (double cgpa) {
  this->cgpa = cgpa;
}

void Student::display () const {
  cout << "Name: " << name << endl;
  cout << "ID: " << id << endl;
  cout << "Desasiswa: " << desasiswa << endl;
  cout << "Year: " << year << endl;
  cout << "Sem: " << semester << endl;
  cout << "CGPA: " << cgpa << endl;
};
