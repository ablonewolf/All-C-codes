#include <iostream>
using namespace std;

class Test
{
private:
  int a;
  int b;

public:
  inline static int count = 0;
  Test(int a, int b)
  {
    this->a = a;
    this->b = b;
    Test::count++;
  }
};

int main()
{
  cout << "Please enter the number of test objects you want to create." << endl;
  int number;
  cout << "Number : ";
  cin >> number;
  for (int i = 0; i < number; i++)
  {
    int a, b;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    Test *test = new Test(a, b);
  }
  cout << "The number of test objects have been created : " << Test::count << endl;
}