// g++ quickSort.cpp -o quickSort && quickSort

#include <iostream>
using namespace std;

int partition (int array [], int start, int end) {
  int pivotIndex = 0,
    pivotValue = 0,
    middle = (start + end) / 2;

  swap(array[middle], array[start]);
  pivotIndex = start;
  pivotValue = array[pivotIndex];

  for (int scan = start; scan <= end; scan++) {
    if (array[scan] < pivotValue) {
      pivotIndex++;
      swap(array[scan], array[pivotIndex]);
    }
  }

  swap(array[start], array[pivotIndex]);
  return pivotIndex;
}

void quickSort (int array [], int start, int end) {
  int pivotPoint;
  if(start < end) {
    pivotPoint = partition(array, start, end);
    quickSort(array, start, pivotPoint - 1);
    quickSort(array, pivotPoint + 1, end);
  }
}

// Helper function to print the array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main () {
  int array [] = {9, 3, 7, 1, 4, 8, 5, 2, 6};
  int size = sizeof(array) / sizeof(array[0]);

  cout << "Original array:" << endl;
  printArray(array, size);

  quickSort(array, 0, size - 1);

  cout << "Sorted array:" << endl;
  printArray(array, size);\

  return 0;
}