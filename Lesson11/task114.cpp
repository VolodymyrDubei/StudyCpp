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
  
  ~SimpleCircle()
  {
    delete itsRadius;
    itsRadius = nullptr;
  }

  // Копіюючий конструктор
  SimpleCircle(const SimpleCircle &);


  // Оператор присвоєння
  SimpleCircle &operator=(const SimpleCircle &other)
  {
    if (this != &other)
    {
      delete itsRadius;
      itsRadius = new int(*other.itsRadius);
    }
    return *this;
  }

  void SetRadius(int radius)
  {
    *itsRadius = radius;
  }
  int GetRadius() const
  {
    return *itsRadius;
  }

  // Перевантаження оператора преінкремента (++x)
  SimpleCircle &operator++()
  {
    ++(*itsRadius);
    return *this;
  }

  // Перевантаження оператора постінкремента (x++)
  SimpleCircle operator++(int)
  {
    SimpleCircle temp = *this;
    ++(*itsRadius);
    return temp;
  }

private:
  int *itsRadius;
};

// Копіюючий конструктор
SimpleCircle::SimpleCircle(const SimpleCircle &rhs)
{
  itsRadius = new int;
  *itsRadius = *(rhs.itsRadius);
  //*itsRadius = rhs.GetRadius();
  //itsRadius = new int(*rhs.itsRadius);
}








SimpleCircle &operator=(const SimpleCircle &other)
{
  if (this != &other)
  {
    delete itsRadius;
    itsRadius = new int(*other.itsRadius);
  }
  return *this;
}

// Перевантаження оператора преінкремента (++x)
SimpleCircle &operator++()
{
  ++(*itsRadius);
  return *this;
}

// Перевантаження оператора постінкремента (x++)
SimpleCircle operator++(int)
{
  SimpleCircle temp = *this;
  ++(*itsRadius);
  return temp;
}
