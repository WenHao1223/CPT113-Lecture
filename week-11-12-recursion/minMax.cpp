// g++ minMax.cpp -o minMax && minMax

#include <iostream>
using namespace std;

void minMax(int arr [], int arrSize, int index, int minMaxValue []) {  
  if (index == arrSize) return;
  else {
    if (index == 0) {
      minMaxValue[0] = arr[0];
      minMaxValue[1] = arr[0];
    } else {
      if (minMaxValue[0] > arr[index])
        minMaxValue[0] = arr[index];
      if (minMaxValue[1] < arr[index])
        minMaxValue[1] = arr[index];
    }
    return minMax(arr, arrSize, index + 1, minMaxValue);
  }
}

int main () {
  const int NUM_ARRAYS = 4;
  int nums[NUM_ARRAYS] = {3,4,1,2};
  int minMaxValues[2];
  minMax(nums, NUM_ARRAYS, 0, minMaxValues);
  
  // Sum of arrays: 10
  cout << "Minimum value: " << minMaxValues[0] << endl; // Minimum value: 1
  cout << "Maximum value: " << minMaxValues[1] << endl; // Maximum value: 4
  return 0;
}