#include <iostream>
using namespace std;

int sum(int x, int y, int z = 0)
{
  return x + y + z;
}

int main()
{
  int a, b;
  cout << "Enter two numbers : ";
  cin >> a >> b;
  cout << "Sum of two numbers : " << sum(a, b) << endl;
}