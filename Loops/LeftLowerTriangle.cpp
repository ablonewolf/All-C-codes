#include <iostream>
using namespace std;

void Draw(int n)
{
  for (int i = 1; i <= n; i++)
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
  int n;
  cout << "Enter the level for triangle : ";
  cin >> n;
  cout << endl;
  cout << "The Left Lower Triangle is below : " << endl;
  Draw(n);
}
