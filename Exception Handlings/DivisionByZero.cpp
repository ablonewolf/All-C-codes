#include <iostream>
using namespace std;

int division(int param1, int param2) throw(string)
{
  string errorMessage = "division by zero not possible";
  if (param2 == 0)
    throw errorMessage;
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
  catch (string message)
  {
    cout << message << endl;
  }
}