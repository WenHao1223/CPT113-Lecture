// g++ *.cpp -o main && main
// output: output.txt

#include <iostream>
using namespace std;

#include "Student.h"

int main () {
  Student s1("Wen Hao", 123, "Tekun", 2024, 2, 3.91),
    s2;

  s1.display();
  cout << endl;

  s2.setName("Ali");
  s2.setId(124);
  s2.setDesasiswa("Restu");
  s2.setYear(2023);
  s2.setSemester(1);
  s2.setCgpa(3.20);
  s2.display();
  cout << endl;

  cout << "Name of s1: " << s1.getName() << endl;
  cout << "Name of s2: " << s2.getName() << endl;

  return 0;
}