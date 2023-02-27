#include <iostream>
#include <cstring>
using namespace std;

int checkIfNumber(char string[])
{
  int i = 0;
  int j = 0;
  while (string[i] != '\0')
  {
    if ((i == 0 && string[i] == '0') || ((int)string[i] < 48 || (int)string[i] > 57))
    {
      j = 1;
      break;
    }
    i++;
  }
  return j;
}

int main()
{
  char numberString[10];
  cout << "Enter the string to convert to a decimal number : " << numberString << endl;
  cin >> numberString;
  if (checkIfNumber(numberString) == 0)
  {
    long int number = strtol(numberString, NULL, 10);
    cout << "A valid string and the number is : " << number << endl;
  }
  else
  {
    cout << "This is not a valid string to check." << endl;
  }
}