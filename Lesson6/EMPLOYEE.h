class Employee
{
  public:
    Employee();
    Employee(unsigned int initAge, unsigned int initYearsOfService, unsigned int initSalary);
	  ~Employee();

	  unsigned int GetAge();
	  void SetAge(unsigned int Age);

	  unsigned int GetYearsOfService();
	  void SetYearsOfService(unsigned int YearsOfService);

    unsigned int GetSalary();
	  void SetSalary(unsigned int Salary);

		void GetEmployeeEarns();

  private:
	  unsigned int itsAge;
    unsigned int itsYearsOfService;
    unsigned int itsSalary;
};

Employee::Employee(unsigned int initAge, unsigned int initYearsOfService, unsigned int initSalary)
{
	itsAge = initAge;
  itsYearsOfService = initYearsOfService;
  itsSalary = initSalary;
}

unsigned int Employee::GetAge()
{
	return itsAge;
}

void Employee::SetAge(unsigned int Age)
{
	itsAge = Age;
}


unsigned int Employee::GetYearsOfService()
{
	return itsYearsOfService;
}

void Employee::SetYearsOfService(unsigned int YearsOfService)
{
	itsYearsOfService = YearsOfService;
}


unsigned int Employee::GetSalary()
{
	return itsSalary;
}

void Employee::SetSalary(unsigned int Salary)
{
	itsSalary = Salary;
}

void Employee::GetEmployeeEarns()
{
  std::cout << "Earns " << (round((float)itsSalary/10)*10/1000) << " thousands of dollars!\n";
}