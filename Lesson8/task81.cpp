#include <iostream>

using namespace std;

int main()
{
	int vTwo;
  int *pOne;

  pOne = &vTwo;

  vTwo = 23;
  
	cout << "vTwo = " << vTwo << endl;
	
  cout << "&vTwo = " << &vTwo << endl;

	cout << "pOne: " << pOne << endl;
	
  cout << "*pOne: " << *pOne << endl;

	return 0;
}
