#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str = "Hello ", name;
  cout << "Please enter your name : ";
  cin >> name;
  cout << endl;
  cout << str.append(name) << "." << endl;

  // printing the current capacity of the string along with its length.
  cout << "Capacity of this string : " << str.capacity() << " and its length : " << str.length() << endl;
  string message = "How are you, ?";
  message.insert(13, name);
  cout << message << endl;
}