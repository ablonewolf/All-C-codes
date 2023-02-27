#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char *mainString = new char[50];
  char *subString = new char[10];
  int tempSize = 0;
  cout << "Enter the main string : ";
  cin.getline(mainString, 50);
  cout << endl;
  cout << "Enter the sub string : ";
  cin.getline(subString, 10);
  for (int i = 0; i < strlen(mainString); i++)
  {
    int curr = i;
    for (int j = 0; j < strlen(subString); j++)
    {
      if (mainString[curr] == subString[j])
      {
        tempSize++;
        curr++;
      }
      else
      {
        tempSize = 0;
        break;
      }
    }
    if (tempSize == strlen(subString))
    {
      break;
    }
  }
  if (tempSize == strlen(subString))
  {
    cout << subString << " is a subString of " << mainString << endl;
  }
  else
  {
    cout << subString << " is not a subString of " << mainString << endl;
  }
}