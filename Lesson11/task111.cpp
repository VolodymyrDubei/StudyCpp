#include <iostream>

using namespace std;

class SimpleCircle
{
public:
	SimpleCircle() { itsRadius = 5; };
  //SimpleCircle(int initRadius) { itsRadius = initRadius; };
  SimpleCircle(int initRadius) : itsRadius(initRadius) {}
	~SimpleCircle() {};

	void SetRadius(int radius) { this->itsRadius = radius; }
	int GetRadius() const { return this->itsRadius; }

  const SimpleCircle& operator++();
  const SimpleCircle operator++(int);

private:
	int itsRadius;
};

const SimpleCircle& SimpleCircle::operator++()
  {
    ++itsRadius;
    return *this;
  }

const SimpleCircle SimpleCircle::operator++(int)
  {
    SimpleCircle temp = *this;
    ++itsRadius;
    return temp;
  }



int main()
{
	SimpleCircle OneCircle;
  SimpleCircle TwoCircle(16);
	

	cout << "Radius One Circle: " << OneCircle.GetRadius() << endl;
  cout << "Radius Two Circle: " << TwoCircle.GetRadius() << endl;

  OneCircle.SetRadius(25);
  TwoCircle.SetRadius(32);
  
  cout << "Radius One Circle: " << OneCircle.GetRadius() << endl;
  cout << "Radius Two Circle: " << TwoCircle.GetRadius() << endl;

  ++OneCircle; // Преінкремент
  cout << "Radius OneCircle after ++OneCircle: " << OneCircle.GetRadius() << endl;

  TwoCircle++; // Постінкремент
  cout << "Radius TwoCircle after TwoCircle++: " << TwoCircle.GetRadius() << endl;

	return 0;
}
