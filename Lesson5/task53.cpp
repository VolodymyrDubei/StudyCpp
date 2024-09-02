#include <iostream>
using namespace std;

unsigned short int myFunc(unsigned short int x);

int main()
{
  unsigned short int x, y;

  cout << "\nEnter the value ";
	cin >> x;

  y = myFunc(x);
  cout << "x: " << x << "\ny: " << y << "\n";
}

unsigned short int myFunc(unsigned short int x)
{
  return (4 * x);
}
