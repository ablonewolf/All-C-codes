#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  cout << "Please enter a string : ";
  cin >> str;
  int length = str.length();
  if (length > 0)
  {
    cout << "The length of the string " << str << " is " << length << endl;
  }
  else
  {
    cout << "It has no characters." << endl;
  }
  if (str.empty())
  {
    cout << "The string is empty." << endl;
  }
  else
  {
    cout << "The string is not empty." << endl;
  }
  // function to clear the contents of the string.
  cout << "Clearing the contents of the string." << endl;
  str.clear();

  if (str.empty())
  {
    cout << "Now the string is empty." << endl;
  }
  else
  {
    cout << "The string is still not empty." << endl;
  }
}