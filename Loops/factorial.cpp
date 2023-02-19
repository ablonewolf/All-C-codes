#include <iostream>
using namespace std;

int calculateFactorial(int number)
{
  if (number == 0)
    return 1;
  return number * calculateFactorial(number - 1);
}

int main()
{
  int number, factorial;
  cout << "Enter the number : ";
  cin >> number;
  if (number > 0)
  {
    cout << "The factorial of " << number << " is " << calculateFactorial(number) << endl;
  }
}