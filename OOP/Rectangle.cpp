#include <iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int width;

public:
  Rectangle()
  {
    this->length = 0;
    this->width = 0;
  }
  Rectangle(int length, int width)
  {
    this->length = length;
    this->width = width;
  }
  Rectangle(Rectangle &rectangle)
  {
    this->length = rectangle.length;
    this->width = rectangle.width;
  }
  void setLength(int length)
  {
    if (length > 0)
    {
      this->length = length;
    }
    else
    {
      cout << "Invalid length value, so setting it to zero." << endl;
      this->length = 0;
    }
  }

  void setWidth(int width)
  {
    if (width > 0)
    {
      this->width = width;
    }
    else
    {
      cout << "Invalid width value, so setting it to zero." << endl;
      this->width = 0;
    }
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

  bool isSquare();
};

bool Rectangle::isSquare()
{
  if (this->getLength() == this->getWidth())
  {
    return true;
  }
  else
  {
    return false;
  }
}

class Cuboid : public Rectangle
{
private:
  int height;

public:
  Cuboid(int length, int width, int height)
  {
    setLength(length);
    setWidth(width);
    this->height = height;
  }

  void setHeight(int height)
  {
    this->height = height;
  }
  int getHeight()
  {
    return this->height;
  }

  int getVolume()
  {
    return this->getLength() * this->getWidth() * this->getHeight();
  }

  bool isCube();
};

bool Cuboid::isCube()
{
  if (this->getLength() == this->getWidth() && this->getWidth() == this->getHeight())
  {
    return true;
  }
  return false;
}

int main()
{
  Rectangle rectangle1;
  cout << "Enter the length and width of the first rectangle." << endl;
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
  if (rectangle1.isSquare())
  {
    cout << "This rectangle is a square." << endl;
  }
  else
  {
    cout << "This rectangle is not a square." << endl;
  }

  int length1, width1;
  cout << "Enter the length and width of the second rectangle." << endl;
  cout << "Length : ";
  cin >> length1;
  cout << "width : ";
  cin >> width1;
  Rectangle *rectangle2 = new Rectangle(length1, width1);
  cout << "The length and width of the above Rectangle are : Length : " << rectangle2->getLength() << ", Width : " << rectangle2->getWidth() << endl;
  cout << "The area of the above rectangle is : " << rectangle2->getArea() << endl;
  cout << "The perimeter of the above rectangle is : " << rectangle2->getPerimeter() << endl;
  if (rectangle2->isSquare())
  {
    cout << "This rectangle is a square." << endl;
  }
  else
  {
    cout << "This rectangle is not a square." << endl;
  }
  delete rectangle2; // deallocating the memory for rectangle2

  cout << "Now copying the first rectangle to the second rectangle." << endl;
  rectangle2 = new Rectangle(rectangle1);
  cout << "The length and width of the above Rectangle are : Length : " << rectangle2->getLength() << ", Width : " << rectangle2->getWidth() << endl;
  cout << "The area of the above rectangle is : " << rectangle2->getArea() << endl;
  cout << "The perimeter of the above rectangle is : " << rectangle2->getPerimeter() << endl;
  if (rectangle2->isSquare())
  {
    cout << "This rectangle is a square." << endl;
  }
  else
  {
    cout << "This rectangle is not a square." << endl;
  }
  delete rectangle2;

  cout << "Now I will create a cuboid. Please enter the length, width and height of the cuboid." << endl;
  int height;
  cout << "Length : ";
  cin >> length;
  cout << "Width : ";
  cin >> width;
  cout << "Height : ";
  cin >> height;
  Cuboid *cuboid = new Cuboid(length, width, height);
  cout << "The volume of this cuboid is : " << cuboid->getVolume() << endl;
  if (cuboid->isCube())
  {
    cout << "This cuboid is a cube." << endl;
  }
  else
  {
    cout << "This cuboid is not a cube." << endl;
  }

  delete cuboid; // deallocating the memory for cuboid
}