#include <iostream>
using namespace std;

// passing two pointer variables which holds the address of the actual variables.
void swapUsingAddress(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int x, y;
  cout << "Enter the two numbers to swap : ";
  cin >> x >> y;
  swapUsingAddress(&x, &y); // calling the method using the address of x & y.
  cout << "After swapping, the values are x : " << x << " and y : " << y << endl;
}