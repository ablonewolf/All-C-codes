#include <iostream>
using namespace std;

void Draw(int n)
{

  for (int i = n; i >= 1; i--)
  {
    for (int j = n - i; j >= 1; j--)
    {
      cout << " ";
    }
    for (int j = i; j >= 1; j--)
    {
      if (j == 1)
        cout << "*";
      else
        cout << "* ";
    }
    cout << endl;
  }
}

int main()
{
  int n;
  cout << "Enter the level of the pyramid : ";
  cin >> n;
  cout << "The Lower Pyramid is : " << endl;
  Draw(n);
}