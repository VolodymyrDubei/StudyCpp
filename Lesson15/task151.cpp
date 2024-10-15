#include <iostream>
#include <string>

using namespace std;

class Rocket
{
public:
  Rocket(double initThr) : thrust(initThr) {}
  ~Rocket() {}
  virtual void launch() const { cout << "Rocket launching with thrust: " << thrust << " kN." << endl; }

protected:
  double thrust;
};


class Airplane
{
public:
  Airplane(double initWing) : wingspan(initWing) {}
  ~Airplane() {}
  virtual void fly() const { cout << "Airplane flying with wingspan: " << wingspan << " meters." << endl;}

protected:
  double wingspan;
};


class JetPlane : public Rocket, public Airplane
{
public:
  JetPlane(double thrust, double wingspan, string initMod)
      : Rocket(thrust), Airplane(wingspan), model(initMod) {}
  ~JetPlane() {}

  void launch() const
  {
    cout << "JetPlane " << model << " launching." << endl;
    Rocket::launch();
  }

  void fly() const
  {
    cout << "JetPlane " << model << " flying." << endl;
    Airplane::fly();
  }

  virtual void showInfo() const
  {
    cout << "JetPlane Model: " << model << endl;
    cout << "Thrust: " << thrust << " kN." << endl;
    cout << "Wingspan: " << wingspan << " meters." << endl;
  }

protected:
  string model;
};

class Boeing747 : public JetPlane
{
public:
  Boeing747(double thrust, double wingspan, int capacity)
      : JetPlane(thrust, wingspan, "Boeing 747"), passengerCapacity(capacity) {}
  ~Boeing747() {}

  void showInfo() const
  {
    JetPlane::showInfo();
    cout << "Passenger Capacity: " << passengerCapacity << endl;
  }

  void boardPassengers()
  {
    cout << "Boeing 747 is boarding up to " << passengerCapacity << " passengers." << endl;
  }

private:
  int passengerCapacity;
};


int main()
{
  Boeing747 jumboJet(300.0, 64.4, 366);
  jumboJet.showInfo();
  jumboJet.launch();
  jumboJet.fly();
  jumboJet.boardPassengers();

  return 0;
}