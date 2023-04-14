#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter Size of the Array" << endl;
  cin >> n;
  int x[n];
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }

  cout << endl;

  int start = 0;
  int end = n - 1;

  while (start < end)
  {
    swap(x[start], x[end]);
    start++;
    end--;
  }

  for (int i = 0; i < n; i++)
  {
    cout << x[i] << " ";
  }
}