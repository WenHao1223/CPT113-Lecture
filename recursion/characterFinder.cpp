// g++ characterFinder.cpp -o characterFinder && characterFinder

#include <iostream>
using namespace std;

int characterFinder (char search, string str, int substring = 0) {
  if (substring > str.length())
    return 0;
  else if (search == str[substring]) {
    return 1 + characterFinder(search, str, substring + 1);
  } else {
    return characterFinder(search, str, substring + 1);
  }
}

int main () {
  cout << "number of occurance of 'a' in 'banana': " << characterFinder('a', "banana") << endl; // output: 3
  return 0;
}