#include <iostream>

using namespace std;

class SimpleCircle
{
public:
    SimpleCircle() : itsRadius(5) {}
    SimpleCircle(int initRadius) : itsRadius(initRadius) {}
    ~SimpleCircle() {}

    void SetRadius(int radius) { this->itsRadius = radius; }
    int GetRadius() const { return this->itsRadius; }

    // Перевантаження оператора преінкремента (++x)
    SimpleCircle& operator++() {
        ++itsRadius;
        return *this;
    }

    // Перевантаження оператора постінкремента (x++)
    SimpleCircle operator++(int) {
        SimpleCircle temp = *this;
        ++itsRadius;
        return temp;
    }

private:
    int itsRadius;
};


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

    // Демонстрація роботи перевантажених операторів
    ++OneCircle; // Преінкремент
    cout << "Radius One Circle after ++OneCircle: " << OneCircle.GetRadius() << endl;

    TwoCircle++; // Постінкремент
    cout << "Radius Two Circle after TwoCircle++: " << TwoCircle.GetRadius() << endl;

    return 0;
}