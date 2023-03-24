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
  Rectangle() : Rectangle(5, 5)
  {
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
  shared_ptr<Rectangle> rectangle(new Rectangle(length, breadth));
  cout << "The area of the rectangle is " << rectangle->getArea() << endl;
  cout << "The perimeter of the rectangle is " << rectangle->getPerimeter() << endl;
  shared_ptr<Rectangle> rectangle2;

  // This is allowed. Two shared pointers can point to the same object in a shared manner.
  rectangle2 = rectangle;
  cout << "The area of rectangle2 is " << rectangle2->getArea() << endl;
  cout << "The perimeter of the rectangle2 is : " << rectangle2->getPerimeter() << endl;
}