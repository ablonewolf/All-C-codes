#include <iostream>
using namespace std;

bool findItem(int *arr, int size, int item)
{
  if (size == 0)
  {
    return false;
  }
  else if (arr[size - 1] == item)
  {
    return true;
  }
  else
  {
    return findItem(arr, size - 1, item);
  }
}

int *initArray(int size)
{
  int *arr = new int[size];
  return arr;
}

void takeInput(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
}

int main()
{
  int size;
  cout << "Enter the size of the array : ";
  cin >> size;
  int *intArray = initArray(size);
  cout << "Enter the elements of the array : " << endl;
  takeInput(intArray, size);
  cout << "Enter the item to search : ";
  int item;
  cin >> item;
  bool found = findItem(intArray, size, item);
  if (found)
  {
    cout << "Item found in the array." << endl;
  }
  else
  {
    cout << "Item does not exists." << endl;
  }
}