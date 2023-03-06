#include <iostream>
using namespace std;

class Student
{
private:
  string name;
  int roll;
  int mathMarks;
  int phyMarks;
  int chemMarks;

public:
  Student(string name, int roll)
  {
    this->name = name;
    this->roll = roll;
  }
  void setMathMarks(int mathMarks)
  {
    this->mathMarks = mathMarks;
  }
  void setPhyMarks(int phyMarks)
  {
    this->phyMarks = phyMarks;
  }
  void setChemMarks(int chemMarks)
  {
    this->chemMarks = chemMarks;
  }

  int getTotalMarks()
  {
    return this->mathMarks + this->phyMarks + this->chemMarks;
  }

  char getOverAllGrade()
  {
    float averageMarks = this->getTotalMarks() / 3;
    if (averageMarks >= 60)
      return 'A';
    else if (averageMarks >= 45 && averageMarks < 60)
    {
      return 'B';
    }

    else if (averageMarks >= 33 && averageMarks < 45)
    {
      return 'C';
    }
    else
    {
      return 'F';
    }
  }
  bool isPassed();
};

bool Student::isPassed()
{
  if (this->getOverAllGrade() != 'F')
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  cout << "Enter the details of the new Student." << endl;
  string name;
  int roll;
  cout << "Enter the name : ";
  cin >> name;
  cout << "Enter the roll : ";
  cin >> roll;
  Student *student1 = new Student(name, roll);
  int mathMarks, phyMarks, chemMarks;
  cout << "Enter the marks of math, physics and chemistry." << endl;
  cout << "Math marks : ";
  cin >> mathMarks;
  cout << "Physics marks : ";
  cin >> phyMarks;
  cout << "Chemistry marks : ";
  cin >> chemMarks;
  if (mathMarks <= 0 || phyMarks <= 0 || chemMarks <= 0)
  {
    cout << "Marks cannot be zero or negative." << endl;
  }
  else
  {
    student1->setMathMarks(mathMarks);
    student1->setPhyMarks(phyMarks);
    student1->setChemMarks(chemMarks);

    cout << "Total marks for this student : " << student1->getTotalMarks() << endl;
    cout << "Overall grade for this student : " << student1->getOverAllGrade() << endl;
    if (student1->isPassed())
    {
      cout << "The Student has passed." << endl;
    }
    else
    {
      cout << "The Student has failed." << endl;
    }
  }
}