#include <iostream>
#include <string>
using namespace std;

int main()
{
  string word;
  bool palindrome = true;
  cout << "Enter the word to test whether it is palindrome or not : ";
  cin >> word;
  for (int i = 0, j = word.length() - 1; i < (word.length()) / 2 - 1, j >= word.length() / 2; i++, j--)
  {
    if (word[i] == word[j])
    {
      continue;
    }
    else
    {
      palindrome = false;
      break;
    }
  }
  if (palindrome)
  {
    cout << word << " is a palindrome string." << endl;
  }
  else
  {
    cout << word << " is not a palindrome string." << endl;
  }
}