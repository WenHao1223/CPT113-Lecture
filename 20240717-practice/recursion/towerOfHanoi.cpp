// g++ towerOfHanoi.cpp -o towerOfHanoi && towerOfHanoi

#include <iostream>
using namespace std;

void moveDiscs(int A, int B, int C, int nDisk) {
  if (nDisk > 0) {
    moveDiscs(A, C, B, nDisk - 1);
    cout << "Moving a disk from peg " << A << " to peg " << C << endl;
    moveDiscs(B, A, C, nDisk - 1);
  }
}

int main () {
  int A = 1,
    B = 2,
    C = 3,
    nDisk = 3;
  moveDiscs(A, B, C, nDisk);
  return 0;
}