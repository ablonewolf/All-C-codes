#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  cout << "Please enter a string of your choice : ";
  getline(cin, str);
  string::iterator ch;
  cout << "Converting each character of the string to Upper case and printing one by one below." << endl;
  for (ch = str.begin(); ch != str.end(); ch++)
  {
    if (*ch != ' ')
    {
      *ch = *ch - 32;
      cout << *ch << endl;
    }
  }
}