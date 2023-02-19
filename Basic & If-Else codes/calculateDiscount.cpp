#include <iostream>
using namespace std;

int main()
{
  int totalAmount;
  float discountAmount;
  cout << "Plean enter the Total Amount ";
  cin >> totalAmount;
  cout << endl;
  if (totalAmount < 100)
  {
    cout << "No Discount Available for this amount." << endl;
    cout << "Amount : " << totalAmount << endl;
  }
  else if (totalAmount >= 100 && totalAmount < 500)
  {
    discountAmount = ((totalAmount * 10) / 100);
    cout << "Discount : " << discountAmount << endl;
    cout << "Discounted Amount : " << totalAmount - discountAmount << endl;
  }
  else
  {
    discountAmount = ((totalAmount * 20) / 100);
    cout << "Discount : " << discountAmount << endl;
    cout << "Discounted Amount : " << totalAmount - discountAmount << endl;
  }

  return 0;
}