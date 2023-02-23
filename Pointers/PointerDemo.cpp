#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  int *p = &a;

  cout << "value of a : " << a << endl;
  cout << "address of a : " << &a << endl;
  cout << "value of p : " << p << endl;
  cout << "address of p : " << &p << endl;
  cout << "deferensing p : " << *p << endl;
  cout << "Is p address of equal? : " << (p == &a) << endl;
}