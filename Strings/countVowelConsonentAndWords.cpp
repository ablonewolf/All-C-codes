#include <iostream>
#include <string>
using namespace std;

int countVowel(string str)
{
  int count = 0;
  for (int i = 0; str[i]; i++)
  {
    switch (str[i])
    {
    case 'e':
    {
      count++;
      break;
    }
    case 'E':
    {
      count++;
      break;
    }
    case 'a':
    {
      count++;
      break;
    }
    case 'A':
    {
      count++;
      break;
    }
    case 'i':
    {
      count++;
      break;
    }
    case 'I':
    {
      count++;
      break;
    }
    case 'o':
    {
      count++;
      break;
    }
    case 'O':
    {
      count++;
      break;
    }
    case 'u':
    {
      count++;
      break;
    }
    case 'U':
    {
      count++;
      break;
    }
    default:
    {
      continue;
    }
    }
  }
  return count;
}

int countCharacters(string str)
{
  int count = 0;
  for (int i = 0; str[i]; i++)
  {
    if (str[i] != ' ' && ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)))
    {
      count++;
    }
  }
  return count;
}

bool ischar(char c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
  {
    return true;
  }
  return false;
}

int countWords(string str)
{
  int count = 0;
  for (int i = 0; str[i]; i++)
  {
    if (i > 0 &&
        (ischar(str[i - 1]) &&
         (str[i] == ' ' ||
          str[i] == ',' ||
          str[i] == ';' ||
          str[i] == '.' ||
          str[i] == '?' ||
          str[i] == '!')))
    {
      count++;
    }
  }
  return count;
}

int main()
{
  string sentence;
  cout << "Enter a sentence : ";
  getline(cin, sentence);
  int vowelCount = countVowel(sentence);
  int wordCount = countWords(sentence);
  cout << "Number of vowels in this sentence : " << vowelCount << "." << endl;
  cout << "Number of consonents in the sentence : " << countCharacters(sentence) - vowelCount << "." << endl;
  cout << "Number of words in the sentence : " << wordCount << "." << endl;
}