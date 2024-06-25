#include <iostream>
using namespace std;

void moveDiscs (int num_discs, int A, int B, int C) {
  if (num_discs > 0) {
    moveDiscs(num_discs - 1, A, C, B);
    cout << "Moving a disc from peg " << A << " to " << C << endl;
    moveDiscs(num_discs - 1, B, A, C);
  }
}

int main () {
  const int NUM_DISKS = 3,
    A = 1,
    B = 2,
    C = 3;
  moveDiscs(NUM_DISKS, A, B, C);
  return 0;
}