#include <iostream>

using namespace std;

int main()
{
  unsigned short ArrayCrossesZeroes[3][3];

	for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      ArrayCrossesZeroes[i][j] = 0;

	for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << ArrayCrossesZeroes[i][j] << " ";
    }
  
    cout << endl;
  }

	return 0;
}
