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

// Абстрактний клас Car
class Car : public Vehicle
{
public:
  Car() {}
  virtual ~Car() {}

  virtual void startEngine() const = 0; // чиста віртуальна функція
  void stopEngine() const  { cout << "Car engine stopped!" << endl; }
};

class SportsCar : public Car
{
public:
  SportsCar() {}
  ~SportsCar() {}

  void startEngine() const { cout << "SportsCar engine started!" << endl; }
  void stopEngine() const  { cout << "SportsCar engine stopped!" << endl; }
};

class Wagon : public Car
{
public:
  Wagon() {}
  ~Wagon() {}

  void startEngine() const { cout << "Wagon engine started!" << endl; }
};

class Coupe : public Car
{
public:
  Coupe() {}
  ~Coupe() {}

  void startEngine() const { cout << "Coupe engine started!" << endl; }
};

class Bus : public Vehicle
{
public:
  Bus() {}
  ~Bus() {}

  void startEngine() const { cout << "Bus engine started." << endl; }
  void stopEngine() const { cout << "Bus engine stopped." << endl; }
};


int main()
{
  Vehicle *mySportsCar = nullptr;
  mySportsCar = new SportsCar();

  Vehicle *myWagon = nullptr;
  myWagon = new Wagon();

  Vehicle *myBus = nullptr;
  myBus = new Bus();


  mySportsCar->startEngine();
  mySportsCar->stopEngine();

  myWagon->startEngine();
  myWagon->stopEngine();

  myBus->startEngine();
  myBus->stopEngine();


  delete mySportsCar;
  mySportsCar = nullptr;
  delete myBus;
  myBus = nullptr;

  return 0;
}