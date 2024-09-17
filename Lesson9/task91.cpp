#include <iostream>

using namespace std;

int main()
{
	int vOne;
  int &rTwo = vOne;
  int *pThree = &vOne;

  rTwo = 23;
  
	cout << "vOne = " << vOne << endl;
	
  cout << "&rTwo = " << rTwo << endl;

	cout << "pThree: " << pThree << endl;

  cout << "&rTwo: " << &rTwo << endl;
	
  cout << "*pThree: " << *pThree << "\n\n";

  *pThree = 69;
  
	cout << "vOne = " << vOne << endl;
	
  cout << "&rTwo = " << rTwo << endl;

	cout << "pThree: " << pThree << endl;
  
  cout << "&rTwo: " << &rTwo << endl;
	
  cout << "*pThree: " << *pThree << endl;

	return 0;
}
