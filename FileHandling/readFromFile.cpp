#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream infile;
  infile.open("my.txt");
  if (!infile)
  {
    cout << "File cannot be opened. It may not exist." << endl;
  }
  else
  {
    string line;
    while (getline(infile, line))
    {
      cout << line << endl;
    }
    if (infile.eof())
    {
      cout << "Reached the end of the file." << endl;
    }
    infile.close();
  }
}