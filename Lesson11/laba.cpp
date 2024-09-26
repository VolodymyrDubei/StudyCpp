#include <iostream>

using namespace std;

class SimpleCircle
{
public:
    SimpleCircle() { 
        itsRadius = new int(5);
    }
    SimpleCircle(int initRadius) { 
        itsRadius = new int(initRadius);
    }
    ~SimpleCircle() {
        delete itsRadius;
    }

    // Копіюючий конструктор
    SimpleCircle(const SimpleCircle& other) {
        itsRadius = new int(*other.itsRadius);
    }

    // // Оператор присвоєння
    // SimpleCircle& operator=(const SimpleCircle& other) {
    //     if (this != &other) {
    //         delete itsRadius;
    //         itsRadius = new int(*other.itsRadius);
    //     }
    //     return *this;
    // }

    void SetRadius(int radius) { 
        *itsRadius = radius;
    }
    int GetRadius() const { 
        return *itsRadius;
    }

    // Перевантаження оператора преінкремента (++x)
    SimpleCircle& operator++() {
        ++(*itsRadius);
        return *this;
    }

    // Перевантаження оператора постінкремента (x++)
    SimpleCircle operator++(int) {
        SimpleCircle temp = *this;
        ++(*itsRadius);
        return temp;
    }

private:
    int* itsRadius;
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

    ++OneCircle;
    TwoCircle++;

    cout << "Radius One Circle after ++: " << OneCircle.GetRadius() << endl;
    cout << "Radius Two Circle after ++: " << TwoCircle.GetRadius() << endl;

    return 0;
}