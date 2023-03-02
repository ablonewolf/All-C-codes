#include <iostream>
using namespace std;

// passing the reference of actual variables, so their values will be modified.
void swapUsingReference(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  int x, y;
  cout << "Enter two variables to swap their value : ";
  cin >> x >> y;
  swapUsingReference(x, y);
  cout << "After swapping, the values are x : " << x << " and y : " << y << endl;
}