#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string name;
  ofstream outfile("my.txt", ios::app); // by default, not adding the option ios::app will truncate all the contents
  cout << "Enter your name : ";
  cin >> name;
  outfile << "Hello " << name << "." << endl;
  int age;
  cout << "Enter your age : ";
  cin >> age;
  outfile << "You are " << age << " years old." << endl;
  outfile << "Take care " << name << ". Will talk to you soon." << endl;
  outfile.close();
}
