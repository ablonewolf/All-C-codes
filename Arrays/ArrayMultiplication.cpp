#include <iostream>
using namespace std;

int main()
{
  int m, n, p, q;
  cout << "Enter the row and column value of first matrix : ";
  cin >> m >> n;
  cout << endl;
  cout << "Enter the row and column value of second matrix : ";
  cin >> p >> q;
  cout << endl;
  if (n != p)
  {
    cout << "Multiplication between these two matrices cannot be possible." << endl;
  }
  else
  {
    int a[m][n], b[n][q];
    cout << "Enter the values of the first matrix : " << endl;
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> a[i][j];
      }
    }

    cout << "Enter the values of the second matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < q; j++)
      {
        cin >> b[i][j];
      }
    }

    int c[m][q];
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < q; j++)
      {
        c[i][j] = 0;
        for (int k = 0; k < p; k++)
        {
          c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
          // cout << c[i][j] << endl;
        }
      }
    }

    cout << "The resulting matrix is below : " << endl;
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < q; j++)
      {
        if (j == q - 1)
        {
          cout << c[i][j];
        }
        else
        {
          cout << c[i][j] << " ";
        }
      }
      cout << endl;
    }
  }
}