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
    ~Car() {}

    void startEngine() const { cout << "Car engine started!" << endl; }
    void stopEngine() const = 0;
};

class SportsCar : public Car 
{
  public:
    SportsCar() {}
    ~SportsCar() {}

    void startEngine() const { cout << "SportsCar engine started!" << endl; }
};

class Wagon : public Car
{
  public:
    void startEngine() const { cout << "Wagon engine started smoothly." << endl; }
};

class Coupe : public Car
{
  public:
    void startEngine() const { cout << "Coupe engine started quietly." << std::endl; }
};

class Bus : public Vehicle
{
  public:
    Bus() {}
    ~Bus() {}

    void startEngine() const { cout << "Bus engine started." << endl; }
    void stopEngine() const { cout << "Bus engine stopped." << endl; }
};

int main() {
    
    Vehicle *myCar = nullptr;
    myCar = new Car();

    Vehicle *myBus = nullptr;
    myBus = new Bus();


    myCar->startEngine(); // Демонстрація використання класу Car
    myCar->stopEngine();

    myBus->startEngine(); // Демонстрація використання класу Bus
    myBus->stopEngine();

    delete myCar, myBus;

    return 0;
}