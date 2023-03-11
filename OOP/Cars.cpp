#include <iostream>
using namespace std;

class Car
{
public:
  // method to start the car
  virtual void start() = 0;
  // method to stop the car
  virtual void stop() = 0;
};

class Toyota : public Car
{
public:
  void start()
  {
    cout << "Toyota is starting." << endl;
  }

  void stop()
  {
    cout << "Toyota is stopping." << endl;
  }
};

class Mitshubishi : public Car
{
public:
  void start()
  {
    cout << "Mitsubishi is starting." << endl;
  }

  void stop()
  {
    cout << "Mitsubishi is stopping." << endl;
  }
};

int main()
{
  Car *car = new Toyota();
  car->start();
  car->stop();
  car = new Mitshubishi();
  car->start();
  car->stop();
}