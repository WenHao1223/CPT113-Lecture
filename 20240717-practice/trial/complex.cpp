#include <iostream>
using namespace std;

class Complex {
  private:
    int real;
    int imag;
  public:
    Complex () {
      real = 0;
      imag = 0;
    }
    
    Complex (int real, int imag) {
      this->real = real;
      this->imag = imag;
    }

    void display () {
      cout << real << " + " << imag << "i" << endl;
    }

    Complex operator+ (Complex const& other) const {
      return Complex(real + other.real, imag+other.imag);
    }
};

int main () {
  Complex a (2,3), b (4,5),
    c = a + b;

  cout << "a: "; a.display();
  cout << "b: "; b.display();
  cout << "c: "; c.display();

  return 0;
}