#include <iostream>
using namespace std;

int Max(int *a, int size)
{
  int max = 0;

  for (int item = 0; item < size; item++)
  {
    if (a[item] >= max)
    {
      max = a[item];
    }
  }

  return max;
}

int main()
{
  cout << "Please enter the size of the array : ";
  int size;
  cin >> size;
  int *a = new int[size];
  cout << "Please enter the elements of the array : " << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> a[i];
  }
  cout << "The max of the array is : " << Max(a, size) << endl;
  delete[] a;
}