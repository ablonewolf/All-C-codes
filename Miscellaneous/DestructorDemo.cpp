#include <iostream>
using namespace std;

class Sample
{
private:
  int x;

public:
  Sample()
  {
    this->x = 0;
  }
  Sample(int x)
  {
    if (x > 0)
    {
      this->x = x;
    }
    else
    {
      cout << "Not positive value. So calling the default constructor." << endl;
      this->x = 0;
    }
  }
  void showValue()
  {
    cout << "Value of x in this object : " << this->x << endl;
  }
  ~Sample()
  {
    cout << "Removing this object from memory." << endl;
  }
};

int main()
{
  Sample *sample = new Sample();
  sample->showValue();
  delete sample;
  sample = new Sample(5);
  sample->showValue();
  delete sample;
}