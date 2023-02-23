#include <iostream>
using namespace std;

void Draw(int n)
{
  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      if (j == i)
      {
        cout << "*";
      }
      else
      {
        cout << "* ";
      }
    }

    cout << endl;
  }
}

int main()
{
  cout << "Enter the level of the triangle : ";
  int n;
  cin >> n;
  cout << "The Left Upper Triangle is below : " << endl;
  Draw(n);
}