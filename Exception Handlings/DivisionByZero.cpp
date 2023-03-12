#include <iostream>
using namespace std;

int division(int param1, int param2)
{
  if (param2 == 0)
    throw 1;
  return param1 / param2;
}

int main()
{
  int number1, number2;
  cout << "Enter the two numbers." << endl;
  cout << "Number 1: ";
  cin >> number1;
  cout << "Number 2 : ";
  cin >> number2;

  try
  {
    int result = division(number1, number2);
    cout << "The result of the division is : " << result << endl;
  }
  catch (int a)
  {
    cout << "Division by zero is not possible." << endl;
  }
}