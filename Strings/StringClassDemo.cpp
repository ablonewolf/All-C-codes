#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  // This will read only one word at a time.
  cout << "Enter a word : ";
  cin >> str;
  cout << str << endl;
  cin.ignore();
  cout << "Enter a line : ";
  // This will read multiple words at a time until enter is hit.
  getline(cin, str);
  cout << str << endl;
}