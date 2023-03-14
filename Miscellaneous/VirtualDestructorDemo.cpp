#include <iostream>
using namespace std;

class Shape
{
public:
  Shape()
  {
    cout << "Shape is being created." << endl;
  }

  virtual int getArea() = 0;
  virtual int getPerimeter() = 0;

  virtual ~Shape()
  {
    cout << "Shape is being destroyed." << endl;
  }
};

class Rectangle : public Shape
{
private:
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
  ~Rectangle()
  {
    cout << "Rectangle is being destroyed." << endl;
  }
};

int main()
{
  Shape *rectangle = new Rectangle(10, 8);
  cout << "Area of the above rectangle is: " << rectangle->getArea() << endl;
  cout << "Perimeter of the above rectangle is: " << rectangle->getPerimeter() << endl;
  delete rectangle;
}