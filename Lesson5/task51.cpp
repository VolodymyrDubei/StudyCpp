#include <iostream>
using namespace std;

unsigned long int Perimeter(unsigned long int length, unsigned long int width);

int main()
{
	int lengthRectangle;
  int widthRectangle;
  int areaRectangle;

	cout << "\nWhat is the length of the rectangle? ";
	cin >> lengthRectangle;
	cout << "\nWhat is the width of the rectangle? ";
	cin >> widthRectangle;

	areaRectangle = Perimeter(lengthRectangle, widthRectangle);

	cout << "\nPerimeter of a rectangle is " << areaRectangle << endl;
	
	return 0;
}

unsigned long int Perimeter(unsigned long int length, unsigned long int width)
{
	return (length * 2 + width * 2);
}
