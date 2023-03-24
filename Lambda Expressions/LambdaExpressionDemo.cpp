#include <iostream>
using namespace std;

int main()
{
  auto findSum = [](auto x, auto y)
  { return x + y; };
  cout << "Enter two numbers: ";
  int x, y;
  cin >> x >> y;
  int sum;
  auto showMsg = [&sum]()
  { cout << "Sum of two numbers : " << sum << endl; };
  sum = findSum(x, y);
  showMsg();
}