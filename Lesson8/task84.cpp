#include <iostream>

using namespace std;

int main()
{
	int numberA;
  int *pNumberA;

  pNumberA = &numberA;

  *pNumberA = 5432;
  
	cout << "\nnumberA = " << numberA << endl;
	
  cout << "&numberA = " << &numberA << endl;

	cout << "pNumberA: " << pNumberA << endl;
	
  cout << "*pNumberA: " << *pNumberA << "\n\n";

  numberA = 9876;

  cout << "numberA = " << numberA << endl;
	
  cout << "&numberA = " << &numberA << endl;

	cout << "pNumberA: " << pNumberA << endl;
	
  cout << "*pNumberA: " << *pNumberA << "\n\n";


	return 0;
}
