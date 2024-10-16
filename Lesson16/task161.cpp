#include <iostream>
#include <memory>

using namespace std;

// Абстрактний клас Vehicle
class Vehicle
{
public:
  Vehicle() {}
  virtual ~Vehicle() {}

  virtual void startEngine() const = 0; // чиста віртуальна функція
  virtual void stopEngine() const = 0;  // чиста віртуальна функція
};

class Car : public Vehicle
{
public:
  Car() {}
  ~Car() {}

  void startEngine() const { cout << "Car engine started!" << endl; }
  void stopEngine() const { cout << "Car engine stopped!" << endl; }
};

class Bus : public Vehicle
{
public:
  Bus() {}
  ~Bus() {}

  void startEngine() const { cout << "Bus engine started!" << endl; }
  void stopEngine() const { cout << "Bus engine stopped!" << endl; }
};

int main()
{
  Vehicle *myCar = nullptr;
  myCar = new Car();

  Vehicle *myBus = nullptr;
  myBus = new Bus();

  myCar->startEngine();
  myCar->stopEngine();

  myBus->startEngine();
  myBus->stopEngine();

  delete myCar;
  myCar = nullptr;
  delete myBus;
  myBus = nullptr;

  return 0;
}