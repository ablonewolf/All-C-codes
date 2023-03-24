#include <iostream>
#include <memory>
using namespace std;

class Rectangle
{
  int length;
  int breadth;

public:
  Rectangle(int length, int breadth)
  {
    this->length = length;
    this->breadth = breadth;
  }
  int getArea()
  {
    return this->length * this->breadth;
  }
  int getPerimeter()
  {
    return 2 * (this->length + this->breadth);
  }
};

int main()
{
  int length, breadth;
  cout << "Enter the the length and breadth of the rectangle." << endl;
  cout << "Length: ";
  cin >> length;
  cout << "Breadth: ";
  cin >> breadth;
  unique_ptr<Rectangle> rectangle(new Rectangle(length, breadth));
  cout << "The area of the rectangle is " << rectangle->getArea() << endl;
  unique_ptr<Rectangle> rectangle2;

  // rectangle2 = rectangle; this is not allowed. A unique pointer will not share its reference with another
  // moving reference from rectangle pointer to rectangle2 pointer
  rectangle2 = move(rectangle);
  cout << "The perimeter of the rectangle is : " << rectangle2->getPerimeter() << endl;
}