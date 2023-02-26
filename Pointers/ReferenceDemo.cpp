#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  int b = 15;
  int &c = a;
  int &d = b;
  c++;
  a++;
  // this will show the value of a as 12
  cout << "Value of a : " << a << endl;
  b = b + 3;
  d = d + 2;
  // this will show the value of b as 20
  cout << "Value of b : " << b << endl;
}