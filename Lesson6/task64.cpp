#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	Employee Taras;
  Employee Stepan;

  Taras.SetAge(35);
  Taras.SetYearsOfService(4);
  Taras.SetSalary(3600);

  Stepan.SetAge(29);
  Stepan.SetYearsOfService(2);
  Stepan.SetSalary(2200);


  cout << "Employee Taras:\n";
	cout << "Age " << Taras.GetAge() << endl;
  cout << "Years of service " << Taras.GetYearsOfService() << endl;
  cout << "Salary " << Taras.GetSalary() << endl;

  cout << "Employee Stepan:\n";
	cout << "Age " << Stepan.GetAge() << endl;
  cout << "Years of service " << Stepan.GetYearsOfService() << endl;
  cout << "Salary " << Stepan.GetSalary() << endl;
	
	return 0;
}