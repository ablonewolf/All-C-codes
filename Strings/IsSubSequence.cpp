#include <iostream>
using namespace std;

int lengthOf(char *string)
{
  int i = 0, length = 0;
  while (string[i] != '\0')
  {
    length++;
    i++;
  }
  return length;
}
int findCharIndex(char *string, char c)
{
  int i = -1, length = 0;
  while (length < lengthOf(string) && string[length] != '\0')
  {
    if (string[length] == c)
    {
      i = length;
      break;
    }
    length++;
  }
  return i;
}

int main()
{
  char *mainString = new char[50];
  char *subSequence = new char[10];
  cout << "Enter the main string : ";
  cin >> mainString;
  cin.ignore();
  cout << endl;
  cout << "Enter the string to check whether it's subsequence of previous string : ";
  cin >> subSequence;
  cin.ignore();
  int sequenceSize = 0;
  int prevPos = 0;
  for (int i = 0; i < lengthOf(subSequence); i++)
  {
    int index = findCharIndex(mainString, subSequence[i]);
    if (index >= 0 && index >= prevPos)
    {
      prevPos = index;
      sequenceSize++;
    }
    if (index < prevPos || sequenceSize == lengthOf(subSequence))
    {
      break;
    }
  }
  if (sequenceSize == lengthOf(subSequence))
  {
    cout << "it is a subsequnce." << endl;
  }
  else
  {
    cout << "it is not a subsequnce." << endl;
  }
}