// g++ *.cpp -o main && main

#include <iostream>
using namespace std;

#include "Person.h"
#include "Student.h"
#include "Course.h"

int main () {
  Student s = Student("Ali", "Penang", 1, 123);
  s.addCourse("Course Name 1", "C1", 2);
  s.addCourse("Course Name 2", "C2", 3);
  s.addCourse("Course Name 3", "S3", 2);

  cout << "Found C1? " << s.searchCourse("C1") << endl; // Found C1? 1
  cout << "Found S1? " << s.searchCourse("S1") << endl; // Found S1? 0


  // Input the course code: C1
  // Input the grade (A / A- / B+ / B / B- / C+ / C / C- / D+ / D / D- / F): A
  s.addResult();
  // Input the course code: C2
  // Input the grade (A / A- / B+ / B / B- / C+ / C / C- / D+ / D / D- / F): B
  s.addResult();
  // Input the course code: S3
  // Input the grade (A / A- / B+ / B / B- / C+ / C / C- / D+ / D / D- / F): A-
  s.addResult();
  // Input the course code: something
  // Course not found
  s.addResult();

  cout << endl;

  // Student's details
  // Name: Ali
  // State: Penang
  // Entry type: 1

  // Courses taken
  // Courses taken: 3
  // Course Name 1   C1      2 units  A       4
  // Course Name 2   C2      3 units  B       3
  // Course Name 3   S3      2 units  A-      3.67

  // CGPA: 3.47714

  // CGPA: 1.52429
  s.printFullReport();

  return 0;
}