#include <iostream>
using namespace std;

class Rectangle
{
public:
  int length;
  int width;

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
  cin >> rectangle1.width;
  cout << "length : ";
  cin >> rectangle1.length;
  cout << "The area of the above rectangle is : " << rectangle1.getArea() << endl;
  cout << "The perimeter of the above rectangle is : " << rectangle1.getPerimeter() << endl;
}