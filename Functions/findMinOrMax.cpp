#include <iostream>
using namespace std;

int findMax(int x, int y)
{
  return x > y ? x : y;
}

int findMin(int x, int y)
{
  return x < y ? x : y;
}

int main()
{
  cout << "Enter two numbers : ";
  int num1, num2;
  cin >> num1 >> num2;
  cout << "What do you want to find out? Min or Max? To find out the minimum value, enter min. To find out the maximum value, enter max" << endl;
  string option;
  cin >> option;
  int (*func)(int, int);
  if (option == "max")
  {
    func = findMax;
    cout << "The max item is : " << func(num1, num2) << endl;
  }
  else if (option == "min")
  {
    func = findMin;
    cout << "The min item is : " << func(num1, num2) << endl;
  }
  else
  {
    cout << "Invalid option. Please run the code again." << endl;
  }
}