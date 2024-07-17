// g++ binarySearch.cpp -o binarySearch && binarySearch

#include <iostream>
using namespace std;

int binarySearch (int array [], int start, int end, int num) {
  if (start > end) {
    return -1;
  } else {
    int middle = (start + end) / 2;
    if (array[middle] == num)
      return middle;
    else if (array[middle] < num)
      return binarySearch(array, middle + 1, end, num);
    else
      return binarySearch(array, start, middle - 1, num);
  }
}

int main () {
  int MAX_ITEMS = 5,
    searchArray [MAX_ITEMS] = {1, 3, 5, 7, 9}, 
    searchVal = 7;
  cout << "Found '" << searchVal << "' at index of " << binarySearch(searchArray, 0, MAX_ITEMS - 1, searchVal) << endl;

  return 0;
}