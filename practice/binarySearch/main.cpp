#include <iostream>
using namespace std;

int binarySearch (int list [], int start, int end, int search) {
  if (start > end)
    return -1;

  int mid = (start + end) / 2;
  
  if (list[mid] == search)
    return mid;
  else if (list[mid] > search)
    return binarySearch(list, start, mid - 1, search);
  else
    return binarySearch(list, mid + 1, end, search);
}

int main () {
  int list [5] = {1,2,3,4,5};
  cout << binarySearch(list, 0, 5, 4) << endl;
  cout << binarySearch(list, 0, 5, 5) << endl;
  cout << binarySearch(list, 0, 5, 6) << endl;
  return 0;
}