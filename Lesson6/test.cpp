#include <iostream>
using namespace std;


int main()
{
	unsigned int number; 
  float decision;

	cout << "Enter number: ";
	cin >> number;
	cout << "\n";

	decision = (float)((number - number%10) + 10)/1000;

	cout << "The result = " << decision << endl;
	
	return 0;
}