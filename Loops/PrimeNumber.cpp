#include <iostream>
#include <cmath>

using namespace std;

void Prime(int n)
{
  if (n == 1)
  {
    cout << "not prime" << endl;
  }
  else if ((n != 2 && n != 3) && (n % 2 == 0 || n % 3 == 0))
  {
    cout << "not prime" << endl;
  }
  else
  {
    int isPrime = 0;
    for (int i = 5; i <= sqrt(n); i++)
    {
      if (n % i == 0)
      {
        isPrime = 1;
        break;
      }
    }
    if (isPrime == 0)
    {
      cout << "prime" << endl;
    }
    else
    {
      cout << "not prime" << endl;
    }
  }
}

int main()
{
  int number;
  cout << "Enter the number to test whether it is prime or not : ";
  cin >> number;
  Prime(number);
}