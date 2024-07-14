// g++ vowels.cpp -o vowels && vowels

#include <iostream>
using namespace std;

int vowels (string str, int index) {
  if (index == str.length()) return 0;

  if (str[index] == 'a' ||
    str[index] == 'e' ||
    str[index] == 'i' ||
    str[index] == 'o' ||
    str[index] == 'u')
    return 1 + vowels(str, index + 1);
  else
    return vowels(str, index + 1);
}

int main () {
  string str1 = "burger";
  cout << "Number of vowels in '" << str1 << "': " << vowels(str1, 0) << endl; // Number of vowels in 'burger': 2

  string str2 = "hello world";
  cout << "Number of vowels in '" << str2 << "': " << vowels(str2, 0) << endl; // Number of vowels in 'hello world': 3
  return 0;
}