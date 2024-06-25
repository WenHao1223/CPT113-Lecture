// g++ towerOfHanoi.cpp -o towerOfHanoi && towerOfHanoi

// NUM_DISCS = 4
// Moving a disk from peg 1 to peg 2
// Moving a disk from peg 1 to peg 3
// Moving a disk from peg 2 to peg 3
// Moving a disk from peg 1 to peg 2
// Moving a disk from peg 3 to peg 1
// Moving a disk from peg 3 to peg 2
// Moving a disk from peg 1 to peg 2
// Moving a disk from peg 1 to peg 3
// Moving a disk from peg 2 to peg 3
// Moving a disk from peg 2 to peg 1
// Moving a disk from peg 3 to peg 1
// Moving a disk from peg 2 to peg 3
// Moving a disk from peg 1 to peg 2
// Moving a disk from peg 1 to peg 3
// Moving a disk from peg 2 to peg 3
// All the pegs are moved!

// NUM_DISCS = 3
// Moving a disk from peg 1 to peg 3
// Moving a disk from peg 1 to peg 2
// Moving a disk from peg 3 to peg 2
// Moving a disk from peg 1 to peg 3
// Moving a disk from peg 2 to peg 1
// Moving a disk from peg 2 to peg 3
// Moving a disk from peg 1 to peg 3
// All the pegs are moved!

#include <iostream>
using namespace std;

void moveDiscs (int nDisk, int A, int B, int C) {
  if (nDisk > 0) {
    moveDiscs (nDisk - 1, A, C, B);
    cout << "Moving a disk from peg " << A << " to peg " << C << endl;
    moveDiscs (nDisk - 1, B, A, C);
  }
}

int main () {
  const int NUM_DISCS = 4,
    A = 1,
    B = 2,
    C = 3;

  moveDiscs(NUM_DISCS, A, B, C);
  cout << "All the pegs are moved!";

  return 0;
}