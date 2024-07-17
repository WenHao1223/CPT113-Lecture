#include "Person.h"

Person::Person(string name, string state, int entryType) {
  this->name = name;
  this->state = state;
  this->entryType = entryType;
}

void Person::setName (string name) {
  this->name = name;
}

string Person::getName () const {
  return name;
}


void Person::setState (string state) {
  this->state = state;
}

string Person::getState () const {
  return state;
}


void Person::setType (int type) {
  this->entryType = type;
}

int Person::getType () const {
  return entryType;
}