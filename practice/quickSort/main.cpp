#include <iostream>
using namespace std;

int partition (int set [], int start, int end) {
  int pivotIndex, pivotValue, mid;
  mid = (start + end) / 2;
  swap(set[mid], set[start]);
  pivotIndex = start;
  pivotValue = set[start];

  for (int scan = start + 1; scan <= end; scan++) {
    if (set[scan] < pivotValue) {
      pivotIndex++;
      swap(set[scan], set[pivotIndex]);
    }
  }

  swap(set[pivotIndex], set[start]);
  return pivotIndex;
}

void quickSort (int set [], int start, int end) {
  int pivotPoint;

  if (start > end) {
    pivotPoint = partition(set, start, end);
    quickSort(set, start, pivotPoint - 1);
    quickSort(set, pivotPoint + 1, end);
  }
}

void displayArray (int set [], int size) {
  for (int i = 0; i < size; i++)
    cout << i << " ";
}

int main () {
  const int NUM = 10;
  int array[NUM] =  {9, 6, 4, 3, 2, 1, 5, 7, 8, 0};

  quickSort(array, 0, NUM);

  displayArray(array, NUM);

  return 0;
}