#include <iostream>
using namespace std;

int *initArray(int size)
{
  int *point = new int[size];
  for (int i = 0; i < size; i++)
  {
    cin >> point[i];
  }
  return point;
}

int main()
{
  int size;
  cout << "Enter the size of your array. size : ";
  cin >> size;
  cout << "Enter the elements of the array : ";
  int *arr = initArray(size);
  cout << "Printing the elements of the array." << endl;
  for (int i = 0; i < size; i++)
  {
    if (i < size - 1)
    {
      cout << arr[i] << " ";
    }
    else
    {
      cout << arr[i];
    }
  }
  cout << endl;
}