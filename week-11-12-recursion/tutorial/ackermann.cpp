// g++ ackermann.cpp -o ackermann && ackermann

//           ⎧  n+1               if m=0
// A(m, n) =    A(m−1,1)          if m>0 and n=0
//           ⎨  A(m−1,A(m,n−1))   if m>0 and n>0
//           ⎩  

// The iterative approach also takes an excessively long time to compute A(4,3),
// resulting in a `KeyboardInterrupt`.
// The Ackermann function's growth is extremely rapid,
// making it challenging to compute for larger inputs
// without specialized techniques or optimizations.

// To give an idea of the function's values,
// here are some known results for smaller inputs:

// A(0,n) = n + 1
// A(1,n) = n + 2
// A(2,n) = 2n + 3
// A(3,n) = 2^(n+3) - 3
// For A(4,3), the value is incredibly large.
// It's often cited as being (2^65536 - 3),
// an astronomically high number that is impractical to calculate directly.

// Therefore, the result of A(4,3) is too large to compute within typical constraints.
// For practical purposes, acknowledging the rapid growth
// and complexity of the Ackermann function suffices. ​

// Instead of trying to compute this with a regular recursive approach,
// we can use a stack-based approach to simulate the recursion.
// This might help in avoiding the recursion depth issue
// and can be more efficient for such deeply recursive functions.

#include <iostream>
using namespace std;

int A (int m, int n) {
  if (m == 0) return n + 1;
  else if (m > 0 && n == 0) return A(m - 1, 1);
  else if (m > 0 and n > 0) return A(m - 1, A(m, n - 1));
  else return 0; // m < 0;
}

int main () {
  int m, n;
  
  m = 4, n = 3;
  // Ackermann's function with m = 4, n = 3 is 
  // output not showing because result is too large to compute
  cout << "Ackermann's function with m = " << m << ", n = " << n << " is " << A(m, n) << endl;
  return 0;
}