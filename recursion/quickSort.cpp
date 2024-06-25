// g++ quickSort.cpp -o quickSort && quickSort

// Output
// Original array:
// 9 3 7 1 4 8 5 2 6
// Sorted array:
// 1 2 3 4 5 6 7 8 9

#include <iostream>
using namespace std;

// Function prototypes
void quickSort(int set[], int start, int end);
int partition(int set[], int start, int end);

void quickSort(int set[], int start, int end) {
  int pivotPoint;
  if (start < end) {
    pivotPoint = partition(set, start, end);
    quickSort(set, start, pivotPoint - 1);
    quickSort(set, pivotPoint + 1, end);
  }
}

int partition(int set[], int start, int end){
  int pivotValue, pivotIndex, mid;
  mid = (start + end) / 2;
  swap(set[start], set[mid]); // Swap middle element with start
  pivotIndex = start;
  pivotValue = set[start];
  for (int scan = start + 1; scan <= end; scan++) {
    if (set[scan] < pivotValue) {
      pivotIndex++;
      swap(set[pivotIndex], set[scan]);
    }
  }
  swap(set[start], set[pivotIndex]); // Move pivot to correct location
  return pivotIndex;
}

// Helper function to print the array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main() {
  int array[] = {9, 3, 7, 1, 4, 8, 5, 2, 6};
  int size = sizeof(array) / sizeof(array[0]);

  cout << "Original array:" << endl;
  printArray(array, size);

  quickSort(array, 0, size - 1);

  cout << "Sorted array:" << endl;
  printArray(array, size);

  return 0;
}