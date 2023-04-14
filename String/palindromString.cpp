#include <iostream>
using namespace std;

bool isPalindrome(string text)
{
  for (int i = 0; i < text.length() / 2; i++)
  {
    if (text[i] != text[text.length() - i - 1])
    {
      return false;
    }
    else
    {
      return true;
    }
  }
}

int main()
{

  string check1 = "abbabba";
  if (isPalindrome(check1))
  {
    cout << "Palindrome" << endl;
  }
  else
  {
    cout << "Not Palindrome" << endl;
  }
  return 0;
}