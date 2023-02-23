#include <iostream>
using namespace std;

int findGCD(int number1, int number2)
{
  int mod = number1 % number2;
  if (mod == 0)
    return number2;
  else
    return findGCD(number2, mod);
}

int main()
{
  int number1, number2;
  cout << "Enter two numbers to find their GCD : ";
  cin >> number1 >> number2;
  int gcd;
  if (number1 == number2)
    gcd = number1;
  else if (number1 > number2)
    gcd = findGCD(number1, number2);
  else
    gcd = findGCD(number2, number1);
  cout << "The GCD is : " << gcd << endl;
}