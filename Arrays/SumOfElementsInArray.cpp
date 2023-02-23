#include <iostream>
using namespace std;

int Sum()
{
  int A[] = {2, 4, 11, 8, 10, 15, 13};
  int sum = 0;

  for (auto item : A)
  {
    sum += item;
  }

  return sum;
}

int main()
{
  cout << "The sum of the elements of the array is : " << Sum() << endl;
}