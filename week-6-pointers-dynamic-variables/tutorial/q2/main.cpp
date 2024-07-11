// g++ *.cpp -o main && main

/* This program demonstrates how assignment operators work with/without dynamic array.
Instructions:
1. Uncomment Method 1, then compile and run the program. Observe the output and relate it with the code. Discuss it.
-------------------------
Display data in object student1: 
        27913:  Test 1 & Test 2: 75     80
Display data in object student2:
        27913:  Test 1 & Test 2: -177138352     543
-------------------------
2. Comment out Method 1. Then uncomment Method 2.
3. Compile and run the program. Observe the output and relate it with the code. Discuss it.
-------------------------
Display data in object student1: 
        27913:  Test 1 & Test 2: 75     80
Display data in object student2:
        27913:  Test 1 & Test 2: 75     80
-------------------------

Reasons: 
1. Shallow Copy Issue: The commented-out Method 1 performs a shallow copy
of the matric and p members. If p is a pointer to dynamically allocated 
memory, this method would just copy the address of the memory block, not 
the content. This can lead to issues like double deletion (when both the 
original and the copied object are destructed) and unintended data 
sharing between objects.

2. Memory Leak: Since it directly assigns the pointer p from one object 
to another without freeing the originally allocated memory, it can cause 
a memory leak if p was already pointing to some allocated memory.

3. Signature for Overloading operator=: The correct signature for 
overloading the assignment operator should return a reference to the 
current object (cwork&) to allow chaining of assignment operations. 
Method 1 returns void, which is not the conventional signature for an 
assignment operator.

4. Handling of Self-assignment: Method 1 does not check for 
self-assignment. While not always harmful, in cases where dynamic memory 
management is involved, not checking for self-assignment can lead to 
issues like data loss (e.g., deleting a resource before copying it).
*/

#include <iostream>
using namespace std;

class cwork {
  private:
    int matric;
    int *p;
  public:
    void createDynamicArray (int size) {
      p = new int [size];
    }

    void setData (int m, int t1, int t2) {
      matric = m;
      p[0] = t1;
      p[1] = t2;
    }

    cwork () {
      matric = 0;
      p = NULL;
    }

    ~cwork () {}

    // Method 1
    // overloading of assignment operator
    // void operator= (const cwork & cw) {
    //   matric = cw.matric;
    //   p = cw.p;
    // }

    // Method 2
    const cwork operator= (const cwork & rightObject) {
      if (this != &rightObject) { // avoid self-assignment
        delete [] p;
        matric = rightObject.matric;
        p = new int [2];
        for (int i = 0; i < 2; i++)
          p[i] = rightObject.p[i];
      }

      // return the oject assigned
      return *this;
    }

    void display () {
      cout << "\t" << matric << ": ";
      cout << "\t" << "Test 1 & Test 2: " << p[0] << "\t" << p[1] << endl;
    }

    void del () {
      delete [] p;
    }
};

int main () {
  cwork student1, student2;
  student1.createDynamicArray(2);
  student1.setData(27913, 75, 80);
  cout << "Display data in object student1: \n";
  student1.display();

  // copy data from object student1 into object student 2
  student2 = student1;
  student1.del(); // object student1 delete dynamic array
  cout << "Display data in object student2: \n";
  student2.display();

  return 0;
}