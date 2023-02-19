#include <iostream>
using namespace std;

int main()
{
  int number, sum = 0;
  cout << "Please enter the number : ";
  cin >> number;
  if (number > 0)
  {
    for (int i = 1; i <= number; i++)
    {
      sum = sum + i;
    }
  }
  if (sum > 0)
  {
    cout << "The sum is : " << sum << endl;
  }
}