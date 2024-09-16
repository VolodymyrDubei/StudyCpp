#include <iostream>

using namespace std;

int main()
{
	int SomeVariable = 5;
	cout << "SomeVariable: " << SomeVariable << "\n";
	int *pVar = &SomeVariable;
	*pVar = 9;
	cout << "SomeVariable: " << *pVar << "\n";
	return 0;
}
