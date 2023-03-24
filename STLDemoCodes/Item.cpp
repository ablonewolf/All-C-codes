#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Item
{
private:
  string name;
  float price;
  int quantity;

public:
  Item(string name, float price, int quantity)
  {
    this->name = name;
    this->price = price;
    this->quantity = quantity;
  }
  string getName()
  {
    return this->name;
  }
  float getPrice()
  {
    return this->price;
  }
  int getQuantity()
  {
    return this->quantity;
  }
  friend ofstream &operator<<(ofstream &ofs, Item *item);
};
ofstream &operator<<(ofstream &ofs, Item *item)
{
  ofs << "Adding a new entry for an Item." << endl;
  ofs << "Item Name: " << item->getName() << endl;
  ofs << "Item Price: " << item->getPrice() << endl;
  ofs << "Item Quantity in Kilograms: " << item->getQuantity() << endl;
  ofs << "---------------------------------------------" << endl;
  return ofs;
}
int main()
{
  vector<Item *> items;
  cout << "Enter the number of items you wish to add." << endl;
  int number;
  cout << "Number of items: ";
  cin >> number;
  int i = 0;
  cout << "Keeping entries for items" << endl;
  while (i < number)
  {
    string name;
    cout << "Enter item name: ";
    cin >> name;
    float price;
    cout << "Enter price in BDT: ";
    cin >> price;
    int quantity;
    cout << "Enter quantity in Kilograms: ";
    cin >> quantity;
    items.push_back(new Item(name, price, quantity));
    i++;
  }
  ofstream ofs("Items.txt", ios::app);
  vector<Item *>::iterator itemIterator = items.begin();
  for (itemIterator = items.begin(); itemIterator != items.end(); ++itemIterator)
  {
    Item *item = *itemIterator;
    ofs << item;
  }
}