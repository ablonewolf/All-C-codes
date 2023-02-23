#include <iostream>
using namespace std;

void Draw(int n)
{

  for (int i = 1; i <= n; i++)
  {
    for (int j = n - i; j >= 1; j--)
    {
      cout << "  ";
    }
    for (int j = i; j >= 1; j--)
    {
      if (j == 1)
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
  cout << "Enter the level for the triangle : ";
  int n;
  cin >> n;
  cout << "Here is the Lower Right Triangle : " << endl;
  Draw(n);
}
