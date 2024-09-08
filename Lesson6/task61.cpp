#include <iostream>
using namespace std;

int exponentNuber(int number, int exponent);

int main()
{
	int number, exponent, decision;

	cout << "Enter number: ";
	cin >> number;
	cout << "Enter exponent: ";
	cin >> exponent;
	cout << "\n";

	decision = exponentNuber(number, exponent);

	cout << "The result of a number " << number << " in exponent " << exponent << " = " << decision << endl;
	
	return 0;
}


int exponentNuber(int number, int exponent)
{
	if (exponent == 1)
		return number;
	else
		return (number * exponentNuber(number, exponent-1));
}

