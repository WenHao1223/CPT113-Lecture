#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
  private:
    string name;
    string state;
    int entryType;
  public:
    Person(string, string , int);

    void setName (string);
    string getName () const;

    void setState (string); 
    string getState () const;

    void setType (int);
    int getType () const;
};

#endif