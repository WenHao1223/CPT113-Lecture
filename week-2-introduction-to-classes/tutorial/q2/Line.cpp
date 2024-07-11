#include "Line.h"

Line::Line() {
  length = 0.0;
}

void Line::setLength (double length) {
  this->length = length;
}

double Line::getLength () const {
  return length;
}