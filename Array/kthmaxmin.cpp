#include <iostream>
using namespace std;

int main()
{

  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int k;
  cin >> k;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[i])
      {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }

  cout << "The " << k << "th largest element is: " << arr[n - k] << endl;
  cout << "The " << k << "th smallest element is: " << arr[k - 1] << endl;

  return 0;
}