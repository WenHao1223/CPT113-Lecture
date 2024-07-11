// g++ *.cpp -o main && main

/* This program demonstrates deep and shallow copy for objects
Instructions:
1. Remove comment for CopyConstructor, then compile and run the program. Observe the output. Relate the code with the output. Discuss your findings.
-------------------------
Int X=10
Int X=10
Int X=12
Int X=10
-------------------------
2. Comment out CopyConstructor, then compile and run the program. Observe the output.
-------------------------
Int X=10
Int X=10
Int X=12
Int X=12
-------------------------
3. Relate with the code and output. Discuss it.
*/

#include <iostream>
using namespace std;

class ShalloC {
  private:
    int * x;
  public:
    ShalloC (int m) {
      x = new int;
      *x = m;
    }

    // CopyConstructor
    // ShalloC (const ShalloC & obj) {
    //   x = new int;
    //   *x = obj.GetX();
    // }

    int GetX () const {
      return *x;
    }

    void SetX (int m) {
      *x = m;
    }

    void PrintX () {
      cout << "Int X=" << *x << endl;
    }

    ~ShalloC () {
      delete x;
    }
};

int main () {
  ShalloC ob1 (10);
  ShalloC ob2 = ob1;
  ob1.PrintX();
  ob2.PrintX();
  ob1.SetX(12);
  ob1.PrintX();
  ob2.PrintX();
}