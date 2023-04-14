#include <iostream>
using namespace std;

int main()
{

  string str = "hello";

  int left = 0;
  int right = str.size() - 1;

  while (left < right)
  {
    swap(str[left], str[right]);
    left = left + 1;
    right = right - 1;
  }

  cout << str;

  return 0;
}