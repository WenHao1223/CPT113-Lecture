// g++ binarySearch.cpp -o binarySearch && binarySearch

#include <iostream>
using namespace std;

int binarySearch (int array [], int first, int last, int value) {
  if (first > last)
    return -1;

  int middle = (first + last) / 2;

  if (array[middle] == value)
    return middle;
  else if (array[middle] < value)
    return binarySearch (array, middle + 1, last, value);
  else
    return binarySearch (array, first, middle - 1, value);
}

int main () {
  int array[5] = {1,2,3,4,5};
  cout << binarySearch(array, 0, 4, 3) << endl; // output: 2
  cout << binarySearch(array, 0, 4, 4) << endl; // output: 3
  cout << binarySearch(array, 0, 4, 5) << endl; // output: 4
  cout << binarySearch(array, 0, 4, 6) << endl; // output: -1
  return 0;
}