#include <iostream>
using namespace std;

template <class T>
T getMax(T a, T b)
{
  if (a > b)
    return a;
  else
    return b;
}

int main()
{
  string dataType;
  cout << "enter the dataType of the two numbers : ";
  cin >> dataType;
  if (dataType == "float")
  {
    float a, b;
    cout << "Enter two float numbers : ";
    cin >> a >> b;
    cout << "The max among the two numbers is : " << getMax(a, b) << endl;
  }
  else if (dataType == "integer")
  {
    int a, b;
    cout << "Enter two integer numbers : ";
    cin >> a >> b;
    cout << "The max among the two numbers is : " << getMax(a, b) << endl;
  }
  else
  {
    cout << "invalid data type. Please try running again." << endl;
  }
}