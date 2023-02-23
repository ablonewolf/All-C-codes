#include <iostream>
using namespace std;

void Reverse(int n)
{
  int rev = 0;
  int m = n;
  int r;

  while (n > 0)
  {
    r = n % 10;
    n = n / 10;
    rev = rev * 10 + r;
  }
  cout << "The reverse number of " << m << " is : " << rev << endl;
}

int main()
{
  cout << "Enter the number to reverse the digits : ";
  int number;
  cin >> number;
  Reverse(number);
}