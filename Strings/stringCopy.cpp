#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;
  cout << "Please enter your name : ";
  cin >> name;
  char *str = new char[name.length()];
  name.copy(str, name.length());
  cout << "Hello " << str << ". Nice to see you on board." << endl;
}