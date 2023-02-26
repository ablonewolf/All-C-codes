#include <iostream>
using namespace std;

int main()
{
  char nickName[20];
  cout << "Enter your nickname : ";
  // this will only accept a word.
  cin >> nickName;
  cout << "Your nickname is : " << nickName << endl;
  cin.ignore();
  char name[50];
  cout << "Enter your full name : ";
  // this will accept a line consisting of multiple words
  cin.get(name, 50);
  cout << "Your full name is : " << name << endl;
  cin.ignore();
  cout << "Enter your full name again : ";
  cin.getline(name, 50);
  cout << "Here is your full name again : " << name << endl;
}