#include <iostream>

using namespace std;

int main()
{
	int x, y;
  int array[10][10]; 

	for (x = 0; x < 10; x++) 
  {
    for (y = 0; y < 10; y++) 
    {
      array[x][y] = 0;
      cout << "X = " << x << "; Y = " << y << "; Array = " << array[x][y] << endl;
    }
    cout << endl;  
  }
	
  return 0;
}