#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	Employee Taras(35, 6, 3467);
  Employee Stepan(24, 3, 2367);
  
  cout << "Employee Taras:\n";
	cout << "Age: " << Taras.GetAge() << endl;
  cout << "Years of service: " << Taras.GetYearsOfService() << endl;
  cout << "Salary: " << Taras.GetSalary() << endl;
  Taras.GetEmployeeEarns();
  cout << "\n";

  cout << "Employee Stepan:\n";
	cout << "Age: " << Stepan.GetAge() << endl;
  cout << "Years of service: " << Stepan.GetYearsOfService() << endl;
  cout << "Salary: " << Stepan.GetSalary() << endl;
  Stepan.GetEmployeeEarns();
	cout << "\n";

	return 0;
}