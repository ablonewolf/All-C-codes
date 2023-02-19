#include <iostream>
using namespace std;

int countDigit(int number)
{
  if (number > 0 && number >= 10)
  {
    return 1 + countDigit(number / 10);
  }
  else
  {
    return 1;
  }
}

int main()
{
  int number;
  cout << "Enter the number : ";
  cin >> number;
  cout << "The number of digits in " << number << " is " << countDigit(number) << endl;
}