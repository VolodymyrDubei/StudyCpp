#include <iostream>
using namespace std;

int myFunc(unsigned short int x);

int main()
{
    unsigned short int x = 5, y;
    y = myFunc(x);
    cout << "x: " << x << " y: " << y << "\n";
}

int myFunc(unsigned short int x)
{
    return (4 * x);
}
