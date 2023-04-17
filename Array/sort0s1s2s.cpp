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

  int lo = 0;
  int mid = 0;
  int hi = n - 1;

  while (mid <= hi)
  {
    switch (x[mid])
    {
    case 0:
      swap(x[lo++], x[mid++]);
      break;
    case 1:
      mid++;
      break;
    case 2:
      swap(x[mid], x[hi--]);
      break;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << x[i];
  }
}