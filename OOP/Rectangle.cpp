#include <iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int width;

public:
  void setLength(int length)
  {
    this->length = length;
  }

  void setWidth(int width)
  {
    this->width = width;
  }

  int getLength()
  {
    return this->length;
  }

  int getWidth()
  {
    return this->width;
  }

  int getArea()
  {
    return length * width;
  }

  int getPerimeter()
  {
    return 2 * (length + width);
  }
};

int main()
{
  Rectangle rectangle1;
  cout << "Enter the length and width of the rectangle." << endl;
  cout << "width : ";
  int length, width;
  cin >> width;
  rectangle1.setWidth(width);
  cout << "length : ";
  cin >> length;
  rectangle1.setLength(length);
  cout << "The length and width of the above Rectangle are : Length : " << rectangle1.getLength() << ", Width : " << rectangle1.getWidth() << endl;
  cout << "The area of the above rectangle is : " << rectangle1.getArea() << endl;
  cout << "The perimeter of the above rectangle is : " << rectangle1.getPerimeter() << endl;
}