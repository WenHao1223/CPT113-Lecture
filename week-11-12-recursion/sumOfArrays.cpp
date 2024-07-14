// g++ sumOfArrays.cpp -o sumOfArrays && sumOfArrays

#include <iostream>
using namespace std;

int sumOfArrays(int arr [], int arrSize, int index) {
  if (index == arrSize)
    return 0;
  else
    return arr[index] + sumOfArrays(arr, arrSize, index + 1);
}

int main () {
  const int NUM_ARRAYS = 4;
  int nums[NUM_ARRAYS] = {1,2,3,4};
  
  // Sum of arrays: 10
  cout << "Sum of arrays: " << sumOfArrays(nums, NUM_ARRAYS, 0) << endl;
  return 0;
}