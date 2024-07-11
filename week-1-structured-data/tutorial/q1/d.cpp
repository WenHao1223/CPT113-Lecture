// g++ d.cpp -o d && d
// output: c-output.txt

#include <iostream>
using namespace std;

struct Student {
  string name;
  int id;
  string desasiswa;
  short year;
  int semester;
  double cgpa;
};

int main () {
  const int NUM_STUDENTS = 5;
  Student s[NUM_STUDENTS];

  for (int i = 0; i < NUM_STUDENTS; i++) {
    cout << "======= INPUT STUDENT " << (i+1) << " INFO =======" << endl;
    cout << "Name: ";
    getline(cin, (s+i)->name);

    cout << "ID: ";
    cin >> (s+i)->id;
    cin.ignore();

    cout << "Desasiswa: ";
    getline(cin, (s+i)->desasiswa);

    cout << "Year: ";
    cin >> (s+i)->year;
    cin.ignore();

    cout << "Semester: ";
    cin >> (s+i)->semester;
    cin.ignore();

    cout << "CGPA: ";
    cin >> (s+i)->cgpa;
    cin.ignore();
    cout << "==================================================" << endl;
  }

  cout << "=========== OUTPUT HERE ===========" << endl;
  for (int i = 0; i < NUM_STUDENTS; i++) {
    cout << "STUDENT " << (i+1) << " INFO" << endl;
    cout << "Name: " << (s+i)->name << endl;
    cout << "ID: " << (s+i)->id << endl;
    cout << "Desasiswa: " << (s+i)->desasiswa << endl;
    cout << "Year: " << (s+i)->year << endl;
    cout << "Semester: " << (s+i)->semester << endl;
    cout << "CGPA: " << (s+i)->cgpa << endl;
  }
  cout << "===================================" << endl;

  return 0;
}