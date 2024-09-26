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
  SimpleCircle(const SimpleCircle &other)
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

  const SimpleCircle &operator++();
  const SimpleCircle operator++(int);
  SimpleCircle &operator=(const SimpleCircle &);

private:
  int *itsRadius;
};

// Перевантаження оператора преінкремента (++x)
const SimpleCircle &SimpleCircle::operator++()
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

// Оператор присвоєння
SimpleCircle &SimpleCircle::operator=(const SimpleCircle &other)
{
  if (this != &other) // Перевірка на самоприсвоєння
  {
    delete itsRadius; // Звільняємо поточну пам'ять

    itsRadius = new int(*other.itsRadius); // Копіюємо дані з іншого об'єкта
  }
  return *this;
}

int main()
{
  SimpleCircle OneCircle;
  SimpleCircle TwoCircle(9);

	cout << "Radius One Circle: " << OneCircle.GetRadius() << endl;
  cout << "Radius Two Circle: " << TwoCircle.GetRadius() << endl;


   ++OneCircle;
  cout << "Radius OneCircle after ++OneCircle: " << OneCircle.GetRadius() << endl;

  ++TwoCircle;
  cout << "Radius TwoCircle after ++TwoCircle: " << TwoCircle.GetRadius() << endl;

  TwoCircle = OneCircle;

  cout << "TwoCircle = OneCircle;" << endl;

  cout << "Radius One Circle: " << OneCircle.GetRadius() << endl;
  cout << "Radius Two Circle: " << TwoCircle.GetRadius() << endl;


  return 0;
}
