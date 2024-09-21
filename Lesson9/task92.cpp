#include <iostream>

using namespace std;

int main()
{
	int varOne = 6;

  const int *const pThree = &varOne; 
  // константний вказівник на константу (постійне значення) типу інт - а ні адресу, а ні значення не можемо змінювати.

  *pThree = 7; 


  int varTwo = 12;

  pThree = &varTwo;

	return 0;
}

  // int varOne = 55;
  // int *const pThre = &varOne; // константний вказівник на тип інт - не можемо змінити адресу, але значення можемо змінити.
  // const int *pTwo = &varOne; // вказівник на константу типу інт - не можемо змінювати значення.
  // const int *const pFour; // константний вказівник на константу типу інт - а ні адресу, а ні значення не можемо змінювати.
