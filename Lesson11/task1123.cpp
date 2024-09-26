#include <iostream>

using namespace std;

class SimpleCircle
{
public:
  SimpleCircle()
  {
    itsRadius = new int(5);
  }
  
  SimpleCircle(int initRadius)
  {
    itsRadius = new int(initRadius);
  }
  
  // Копіюючий конструктор
  SimpleCircle(const SimpleCircle& other)
  {
    itsRadius = new int(*other.itsRadius);
  }

  ~SimpleCircle()
  {
    delete itsRadius;
    itsRadius = nullptr;
  }

  void SetRadius(int radius)
  {
    *itsRadius = radius;
  }
  int GetRadius() const
  {
    return *itsRadius;
  }

  const SimpleCircle& operator++();
  const SimpleCircle operator++(int);

private:
  int *itsRadius;
};

// Перевантаження оператора преінкремента (++x)
const SimpleCircle& SimpleCircle::operator++()
  {
    ++(*itsRadius);
    return *this;
  }

// Перевантаження оператора постінкремента (x++)
const SimpleCircle SimpleCircle::operator++(int)
  {
    SimpleCircle temp = *this;
    ++(*itsRadius);
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

