#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
  string overFlowErrorMessage = "Stack overflow detected, cannot push new element.";
  string underFlowErrorMessage = "Empty stack detected, no value exists in the stack.";
  T top;

public:
  class Node
  {
  public:
    T value;
    Node *next;
    Node(T value)
    {
      this->value = value;
      this->next = nullptr;
    }
  };
  int size;
  int currentSize = 0;
  Node *head;

  Stack(int size)
  {
    this->size = size;
    this->head = nullptr;
  }
  void push(T value)
  {
    Node *node = new Node(value);
    // cout << this->head;
    if (this->head == nullptr)
    {
      this->head = node;
    }
    else
    {
      if (this->currentSize < this->size)
      {
        node->next = this->head;
        this->head = node;
        this->top = head->value;
        this->currentSize++;
      }
      else
      {
        throw overFlowErrorMessage;
      }
    }
  }

  T getTop()
  {
    if (this->head != nullptr)
    {
      return this->top;
    }
    throw underFlowErrorMessage;
  }

  T pop()
  {
    if (this->head != nullptr)
    {
      T value = this->head->value;
      this->head = this->head->next;
      this->currentSize--;
      return value;
    }
  }
  void printValues()
  {
    Node *temp = this->head;
    if (temp == nullptr)
    {
      cout << "Empty Stack" << endl;
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
  cout << "Please enter the data type of stack you want to create. Integer or Float available." << endl;
  cout << "Data type : ";
  string dataType;
  cin >> dataType;

  if (dataType == "integer")
  {
    cout << "Please enter the size : ";
    int size;
    cin >> size;
    Stack<int> intStack(size);
    cout << "Stack with size : " << size << " and of data type Integer has been created." << endl;
    if (size > 0)
    {
      while (1)
      {
        cout << "Please enter 1 to push value, 2 to print the top, 3 to pop value, 4 to print all values, and 0 to terminate operations." << endl;
        cout << "Option : ";
        int option;
        cin >> option;
        if (option == 0)
        {
          cout << "Terminating stack operation" << endl;
          break;
        }
        else if (option == 1)
        {
          try
          {
            int value;
            cout << "Enter the value : ";
            cin >> value;
            intStack.push(value);
          }
          catch (string message)
          {
            cout << message << endl;
          }
        }
        else if (option == 2)
        {
          try
          {
            cout << "Top of the stack is : " << intStack.getTop() << endl;
          }
          catch (string message)
          {
            cout << message << endl;
          }
        }
        else if (option == 3)
        {
          try
          {
            cout << "After popping, we get the value : " << intStack.pop() << endl;
          }
          catch (string message)
          {
            cout << message << endl;
          }
        }
        else if (option == 4)
        {
          cout << "The values of the stack are below : " << endl;
          intStack.printValues();
        }
        else
        {
          cout << "Invalid option. Please try again." << endl;
        }
      }
    }
  }
  else if (dataType == "float")
  {
    cout << "Please enter the size : ";
    int size;
    cin >> size;
    Stack<float> floatStack(size);
    cout << "Stack with size : " << size << " and of data type float has been created." << endl;
    cout << "Please enter 1 to push value, 2 to print the top, 3 to pop value, 4 to print all values, and 0 to terminate operations" << endl;
    while (1)
    {
      cout << "Option : ";
      int option;
      cin >> option;
      if (option == 0)
      {
        cout << "Terminating stack operation" << endl;
        break;
      }
      else if (option == 1)
      {
        try
        {
          float value;
          cout << "Enter the value : ";
          cin >> value;
          floatStack.push(value);
        }
        catch (string message)
        {
          cout << message << endl;
        }
      }
      else if (option == 2)
      {
        try
        {
          cout << "Top of the stack is : " << floatStack.getTop() << endl;
        }
        catch (string message)
        {
          cout << message << endl;
        }
      }
      else if (option == 3)
      {
        try
        {
          cout << "After popping, we get the value : " << floatStack.pop() << endl;
        }
        catch (string message)
        {
          cout << message << endl;
        }
      }
      else if (option == 4)
      {
        cout << "The values of the stack are below : " << endl;
        floatStack.printValues();
      }
      else
      {
        cout << "Invalid option. Please try again." << endl;
      }
    }
  }
  else
  {
    cout << "Invalid data Type." << endl;
  }
}