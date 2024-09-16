#include <iostream>

using namespace std;

int main()
{
	unsigned short yourAge;
  unsigned short *pYourAge;

  pYourAge = &yourAge;

  *pYourAge = 50;
  
	cout << "yourAge = " << yourAge << endl;
	
  cout << "&yourAge = " << &yourAge << endl;

	cout << "pYourAge: " << pYourAge << endl;
	
  cout << "*pYourAge: " << *pYourAge << endl;

	return 0;
}
