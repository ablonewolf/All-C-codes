#include <iostream>
using namespace std;

class LinkedList
{
public:
  class Node
  {
  public:
    int value;
    Node *next = nullptr;
    Node(int value)
    {
      this->value = value;
      this->next = nullptr;
    }
  };
  LinkedList()
  {
    this->head = nullptr;
  }
  LinkedList(int initialValue)
  {
    this->head->value = initialValue;
  }
  Node *head;
  ;
  void insertNode(int value)
  {
    Node *node = new Node(value);
    if (this->head != nullptr)
    {
      Node *temp = this->head;
      while (1)
      {
        if (temp->next == nullptr)
        {
          temp->next = node;
          break;
        }
        temp = temp->next;
      }
    }
    else
    {
      this->head = node;
    }
  }
  void removeNode(int value)
  {
    bool found = false;
    if (this->head == nullptr)
    {
      cout << "This LinkedList is empty." << endl;
    }
    else
    {
      if (this->head->value == value)
      {
        this->head = this->head->next;
        cout << "Node with value : " << value << " has been removed." << endl;
      }
      else
      {
        Node *temp = this->head;
        while (1)
        {
          temp = temp->next;
          if (temp->next->value == value)
          {
            Node *newNext = temp->next->next;
            temp->next = newNext;
            found = true;
            break;
          }
          if (temp == nullptr)
          {
            break;
          }
        }
        if (!found)
        {
          cout << "Node with value : " << value << " has been removed." << endl;
        }
      }
    }
  }

  int getSize()
  {
    int count = 0;
    if (this->head == nullptr)
    {
      return count;
    }
    else
    {
      count++;
      Node *temp = this->head;
      while (temp->next != nullptr)
      {
        count++;
        temp = temp->next;
      }
      return count;
    }
  }
  void printValues()
  {
    Node *temp = this->head;
    if (temp == nullptr)
    {
      cout << "Empty linked list" << endl;
    }
    else
    {
      while (temp != nullptr)
      {
        cout << temp->value;
        if (temp->next != nullptr)
        {
          cout << " -> ";
          temp = temp->next;
        }
        else
        {
          cout << endl;
          break;
        }
      }
    }
  }
};

int main()
{
  LinkedList *linkedList = new LinkedList();
  cout << "Enter the size of the linked list : " << endl;
  int size;
  cout << "Size : ";
  cin >> size;
  cout << "Enter the values inside the linkedlist." << endl;
  int value;
  for (int i = 0; i < size; i++)
  {
    cout << "Value : ";
    cin >> value;
    linkedList->insertNode(value);
  }
  cout << "Size of the linkedlist is : " << linkedList->getSize() << endl;
  cout << "Its values are : ";
  linkedList->printValues();
  cout << "Now enter value to remove an element." << endl;
  cout << "Value to be removed : ";
  cin >> value;
  linkedList->removeNode(value);
  cout << "After removing the size of the linkedList : " << linkedList->getSize() << endl;
  cout << "Its values are : ";
  linkedList->printValues();
}