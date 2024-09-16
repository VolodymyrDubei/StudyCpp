#include <iostream>

using namespace std;

int main()
{
  int Int;

	int *pInt;

  pInt = &Int;

	*pInt = 9;
  
	cout << " The value at pInt: "<< *pInt << endl;

	return 0;
}

