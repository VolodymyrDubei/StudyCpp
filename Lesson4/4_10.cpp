#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	cout << "Enter two numbers.\n";
	cout << "First: ";
	cin >> x;
	cout << "\nSecond: ";
	cin >> y;
	cout << "\n";
	if (x > y)
		z = x;
	else
		z = y;
	cout << "z: " << z;
	cout << "\n";
	z = (x > y) ? x : y;
	cout << "z: " << z;
	cout << "\n";
	return 0;
}
/*
Enter two numbers.
First: 5

Second: 8

z: 8
z: 8
*/
