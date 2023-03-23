#include <iostream>
#include <fstream>
using namespace std;

class Engineer
{
private:
  string name;
  int roll;
  string language;

public:
  Engineer(string name, int roll, string language)
  {
    this->name = name;
    this->roll = roll;
    this->language = language;
  }
  string getName()
  {
    return this->name;
  }
  int getRoll()
  {
    return this->roll;
  }
  string getLanguage()
  {
    return this->language;
  }
  friend ofstream &operator<<(ofstream &ofs, Engineer *engineer);
  friend ifstream &operator>>(ifstream &ifs, Engineer &engineer);
};
ofstream &operator<<(ofstream &ofs, Engineer *engineer)
{
  ofs << "Adding a new entry for an engineer." << endl;
  ofs << "Name : " << engineer->getName() << endl;
  ofs << "Employee ID : " << engineer->getRoll() << endl;
  ofs << "Programming Language : " << engineer->getLanguage() << endl;
  return ofs;
}

int main()
{
  Engineer *engineer;
  cout << "Enter the details of the engineer." << endl;
  string name, language;
  int roll;
  cout << "Enter name : ";
  getline(cin, name);
  cout << "Enter Employee ID : ";
  cin >> roll;
  cout << "Enter the name of programming language : ";
  cin >> language;
  engineer = new Engineer(name, roll, language);
  ofstream ofs("Engineers.txt", ios::app);
  cout << "Writing engineer details to the file." << endl;
  ofs << engineer;
  ofs.close();
}