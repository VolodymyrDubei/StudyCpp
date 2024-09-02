#include <iostream>
using namespace std;

float functionDivision(unsigned short int firstVariable, unsigned short int secondVariable);

int main()
{
  unsigned short int first, second;
	float result;

	cout << "\nEnter two numbers.";
  cout << "\nFirst: ";
	cin >> first;
  cout << "\nSecond: ";
	cin >> second;

	result = functionDivision(first, second);

	if (result == -1)
    cout << "\nThe function returned an error!" << endl;
  else
    cout << "\nFunction result = " << result << endl;

	return 0;
}

float functionDivision(unsigned short int firstVariable, unsigned short int secondVariable)
{
	if (secondVariable == 0)
		return -1;
	else
		return (float)firstVariable / secondVariable;
}
