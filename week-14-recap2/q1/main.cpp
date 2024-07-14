// g++ main.cpp -o main && main

#include <iostream>
using namespace std;

int main () {
  // 2D array
  // Number of row(s): 2
  // Number of column(s): 3
  // 1 2 3
  // 4 5 6

  // 2D array
  // Number of row(s): 3
  // Number of column(s): 3
  // 1 2 3 
  // 4 5 6
  // 7 8 9

  int rows, cols;

  int ** arr;

  cout << "2D array\n";
  cout << "Number of row(s): ";
  cin >> rows;
  cout << "Number of column(s): ";
  cin >> cols;

  arr = new int * [rows];
  for (int i = 0; i < rows; i++)
    arr[i] = new int [cols];

  // assign values
  int count = 1;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      arr[i][j] = count;
      count++;
    }
  }

  // display 2d array
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < rows; i++) {
    delete [] arr[i];
  }
  delete [] arr;

  return 0;
}