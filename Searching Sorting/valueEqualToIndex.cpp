#include <iostream>
using namespace std;
int getFixedPoint(int arr[], int left, int right)
{
  if (right >= left)
  {
    int mid = (left + right) / 2;
    if (mid == arr[mid])
      return mid;
    if (mid > arr[mid])
      return getFixedPoint(arr, (mid + 1), right);
    else
      return getFixedPoint(arr, left, (mid - 1));
  }
  return -1;
}
int main()
{
  int arr[] = {-10, -1, 0, 3, 10, 11, 9, 50, 56};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Fixed Point: " << getFixedPoint(arr, 0, n - 1);
}