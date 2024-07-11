// g++ main.cpp -o main && main
// output: output.txt

#include <iostream>
using namespace std;

struct character {
  string name;
  string skill;
};

void setCharacter(character c [], int n) {
  for (int i = 0; i < n; i++) {
    cout << "====== CHARACTER " << (i+1) << "======" << endl;
    cout << "Name: ";
    getline(cin, (c+i)->name);

    cout << "Skill: ";
    getline(cin, (c+i)->skill);
    cout << "=========================" << endl;
  }
}

void getCharacter(character c [], int n) {
  cout << "======== OUTPUT =========" << endl;
  for (int i = 0; i < n; i++) {
    cout << (c+i)->name << " - " << (c+i)->skill << endl;
  }
  cout << "=========================" << endl;
}

int main () {
  const int NUM_CHARACTERS = 4;
  character c[NUM_CHARACTERS];

  setCharacter(c, NUM_CHARACTERS);
  getCharacter(c, NUM_CHARACTERS);

  return 0;
}