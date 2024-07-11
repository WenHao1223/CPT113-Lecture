#ifndef LINE_H
#define LINE_H

#include <iostream>
using namespace std;

class Line {
  private:
    double length;
  public:
    Line();
    void setLength (double length);
    double getLength () const;
};

#endif