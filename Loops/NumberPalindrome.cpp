#include <iostream>
using namespace std;

void Palindrome(int n)
{
  int rev = 0;
  int r;
  int m = n;

  while (n > 0)
  {
    r = n % 10;
    n = n / 10;
    rev = rev * 10 + r;
  }
  if (rev == m)
  {
    cout << m << " is a palindrome number." << endl;
  }
  else
  {
    cout << m << " is not a palindrome number." << endl;
  }
}

int main()
{
  cout << "Enter the number to check whether it is a palindrome : ";
  int number;
  cin >> number;
  Palindrome(number);
}