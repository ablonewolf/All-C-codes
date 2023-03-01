#include <iostream>
#include <string>
using namespace std;

int main()
{
  string email, username = "";
  bool valid = false;
  cout << "Please enter your email address : ";
  cin >> email;
  for (int i = 0; email[i]; i++)
  {
    if (i > 0 && email[i] == '@')
    {
      valid = true;
      username = email.substr(0, i);
    }
  }

  if (valid && username.length() > 0)
  {
    cout << "Your username is : " << username << "." << endl;
  }
  else
  {
    cout << "Not a valid email address." << endl;
  }
}