#include <iostream>
using namespace std;

class Animal
{
public:
  virtual void roar()
  {
    cout << "The Animal is roaring." << endl;
  }

  void eat()
  {
    cout << "The Animal is eating." << endl;
  }
};

class Lion : public Animal
{
public:
  void roar()
  {
    cout << "The Lion is roaring." << endl;
  }

  void eat()
  {
    cout << "The Lion i eating." << endl;
  }
};

int main()
{
  Animal *lion = new Lion();
  // This will override the roar method
  lion->roar();
  // This will not override the eat method as this method is not virtual
  lion->eat();
}