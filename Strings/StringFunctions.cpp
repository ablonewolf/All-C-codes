#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char *firstName = new char[15];
  char *lastName = new char[15];
  char *fullName = new char[30];
  cout << "Enter your first name : ";
  cin >> firstName;
  cin.ignore();
  cout << endl;
  cout << "Enter your last name : ";
  cin >> lastName;
  cin.ignore();
  cout << endl;
  fullName = strcat(strcat(firstName, " "), lastName);
  cout << "Hello " << fullName << ". Nice to meet you." << endl;
  cout << "length of your full name : " << strlen(fullName) << endl;
  char *name = new char[30];
  strcpy(name, fullName);
  cout << "Take care " << name << ". Will see you soon." << endl;
}