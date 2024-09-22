#include <iostream>

using namespace std;

void sumNumbers(int numA, int numB)
{
  int *sum = new int;

  *sum = numA + numB;

  cout << "Sum of numbers = " << *sum << endl;

  delete sum; 
  /*
  якщо не використати оператор delete, тоді після завершення роботи 
  функції, вся виділена пам'ять залишається незвільненою, що призводить 
  до витоку пам'яті.
  */
  
  sum = nullptr;

}

int main()
{

  int a, b;

  cout << "Enter A: " << endl;
  cin >> a;
  cout << "Enter B: " << endl;
  cin >> b;

  sumNumbers(a, b);
  
  return 0;
}