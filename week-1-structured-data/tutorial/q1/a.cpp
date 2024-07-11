// g++ a.cpp -o a && a
// output: a-output.txt

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
  Student s1;

  cout << "Name: ";
  getline(cin, s1.name);

  cout << "ID: ";
  cin >> s1.id;
  cin.ignore();

  cout << "Desasiswa: ";
  getline(cin, s1.desasiswa);

  cout << "Year: ";
  cin >> s1.year;
  cin.ignore();

  cout << "Semester: ";
  cin >> s1.semester;
  cin.ignore();

  cout << "CGPA: ";
  cin >> s1.cgpa;
  cin.ignore();

  cout << "=========== OUTPUT HERE ===========" << endl;
  cout << "Name: " << s1.name << endl;
  cout << "ID: " << s1.id << endl;
  cout << "Desasiswa: " << s1.desasiswa << endl;
  cout << "Year: " << s1.year << endl;
  cout << "Semester: " << s1.semester << endl;
  cout << "CGPA: " << s1.cgpa << endl;
  cout << "===================================" << endl;

  return 0;
}