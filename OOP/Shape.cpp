#include <iostream>
using namespace std;

class Shape
{
public:
  virtual float getArea() = 0;
  virtual float getPerimeter() = 0;
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
  float getArea()
  {
    return this->length * this->breadth;
  }

  float getPerimeter()
  {
    return 2 * (this->length + this->breadth);
  }
};

class Circle : public Shape
{
private:
  int radius;

public:
  Circle(int radius)
  {
    this->radius = radius;
  }
  void setRadius(int radius)
  {
    this->radius = radius;
  }
  float getArea()
  {
    return 3.14 * this->radius * this->radius;
  }
  float getPerimeter()
  {
    return 2 * 3.14 * this->radius;
  }
};

int main()
{
  cout << "Enter the length and breadth of the Rectangle" << endl;
  cout << "Length : ";
  int length, breadth;
  cin >> length;
  cout << "Breadth : ";
  cin >> breadth;
  Shape *shape1 = new Rectangle(length, breadth);
  cout << "Area of the Rectangle : " << shape1->getArea() << endl;
  cout << "Perimeter of the Rectangle : " << shape1->getPerimeter() << endl;
  delete shape1;
  cout << "Now enter the radius of the circle" << endl;
  cout << "Radius : ";
  int radius;
  cin >> radius;
  shape1 = new Circle(radius);
  cout << "Area of the circle : " << shape1->getArea() << endl;
  cout << "Perimeter of the circle : " << shape1->getPerimeter() << endl;
  delete shape1;
}