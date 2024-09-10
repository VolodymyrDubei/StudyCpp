#include <iostream>

using namespace std;

int main()
{
	int index = 100;
	
	do
	{
    cout << "\nIndex = " << index << endl;
		index += 2;
	} while (index <= 200);
	
	return 0;
}