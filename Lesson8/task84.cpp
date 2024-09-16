#include <iostream>

using namespace std;

int main()
{
	int numberA;
  int *pNumberA;

  pNumberA = &numberA;

  *pNumberA = 5345;
  
	cout << "numberA = " << numberA << endl;
	
  cout << "&numberA = " << &numberA << endl;

	cout << "pNumberA: " << pNumberA << endl;
	
  cout << "*pNumberA: " << *pNumberA << endl;

	return 0;
}
