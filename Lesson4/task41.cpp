#include <iostream>
using namespace std;

int main()
{
	int numA, numB;
  
	cout << "\nEnter the first number: ";
	cin >> numA;
  cout << "\nEnter the second number: ";
	cin >> numB;

	if (numA > numB)
		{
      numA = numB;
      cout << "\nMinimum number: " << numA << endl;
    }
  else
		{
      numB = numA;
      cout << "\nMinimum number: " << numB << endl;
    }

	return 0;
}