// g++ palindrome.cpp -o palindrome && palindrome

#include <iostream>
using namespace std;

bool palindrome (string str, int index) {
  if (index > (str.length() / 2))
    return true;
  else
    return (str[index] == str[str.length() - index - 1]) && palindrome(str, index + 1);
}

int main () {
  string str1 = "madam";

  // 'madam' matches palindrome: true
  cout << "'" << str1 << "' matches palindrome: ";
  if (palindrome(str1, 0))
    cout << "true";
  else
    cout << "false";
  cout << endl;

  string str2 = "banana";

  // 'banana' matches palindrome: false
  cout << "'" << str2 << "' matches palindrome: ";
  if (palindrome(str2, 0))
    cout << "true";
  else
    cout << "false";
  cout << endl;

  string str3 = "tiger";
  
  // 'tiger' matches palindrome: false
  cout << "'" << str3 << "' matches palindrome: ";
  if (palindrome(str3, 0))
    cout << "true";
  else
    cout << "false";
  cout << endl;

  string str4 = "abccba";
  
  // 'abccba' matches palindrome: true
  cout << "'" << str4 << "' matches palindrome: ";
  if (palindrome(str4, 0))
    cout << "true";
  else
    cout << "false";
  cout << endl;
  
  return 0;
}