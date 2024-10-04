

// Запишіть віртуальний конструктор-копіювальник для класу Square.

class Square : public Rectangle {};


// Віртуальний конструктор-копіювальник

virtual Rectangle* Clone() const
{
  return new Square(*this);
}




  