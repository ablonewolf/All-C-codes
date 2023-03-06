#include <iostream>
using namespace std;

class ComplexNumber
{
private:
  int real;
  int imaginary;

public:
  ComplexNumber(int real = 0, int imaginary = 0)
  {
    this->real = real;
    this->imaginary = imaginary;
  }

  int getReal()
  {
    return this->real;
  }

  int getImaginary()
  {
    return this->imaginary;
  }

  void printNumber()
  {
    cout << this->real << " + " << this->imaginary << "i" << endl;
  }

  ComplexNumber operator+(ComplexNumber number)
  {
    int real = this->getReal() + number.getReal();
    int imaginary = this->getImaginary() + number.getImaginary();
    return ComplexNumber(real, imaginary);
  }

  friend ComplexNumber operator-(ComplexNumber number1, ComplexNumber number2);
};

ComplexNumber operator-(ComplexNumber number1, ComplexNumber number2)
{
  int real = number1.getReal() - number2.getReal();
  int imaginary = number1.getImaginary() - number2.getImaginary();
  return ComplexNumber(real, imaginary);
}

int main()
{
  cout << "Enter the first Complex Number." << endl;
  cout << "Real part : ";
  int real, imaginary;
  cin >> real;
  cout << "Imaginary part : ";
  cin >> imaginary;

  ComplexNumber number1(real, imaginary);

  cout << "Enter the second Complex Number." << endl;
  cout << "Real part : ";
  cin >> real;
  cout << "Imaginary part : ";
  cin >> imaginary;

  ComplexNumber number2(real, imaginary);

  ComplexNumber sum = number1 + number2;
  cout << "The sum of the above two complex numbers is : ";
  sum.printNumber();

  cout << "Now subtracting the two complex numbers :" << endl;
  ComplexNumber subtraction = number1 - number2;
  cout << "The subtraction of the above numbers is : ";
  subtraction.printNumber();
}