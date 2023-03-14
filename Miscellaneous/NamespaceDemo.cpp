#include <iostream>
using namespace std;

namespace firstNameSpace
{
  void function()
  {
    cout << "Function is being called from first name space." << endl;
  }
}

namespace secondNameSpace
{
  void function()
  {
    cout << "Function is being called from second name space." << endl;
  }
}

int main()
{
  firstNameSpace::function();
  secondNameSpace::function();
}