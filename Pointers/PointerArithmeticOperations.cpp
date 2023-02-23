#include <iostream>
using namespace std;

int main()
{
  int A[] = {5, 10, 15, 20, 30};
  int *p = A;

  cout << *p << endl;
  // moving the pointer to next element
  p++;
  cout << *p << endl;
  // moving the pointer to previous element
  p--;
  cout << *p << endl;
}