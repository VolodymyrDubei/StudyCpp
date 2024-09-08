class Employee
{
  public:
	  unsigned int GetAge();
	  void SetAge(unsigned int Age);

	  unsigned int GetYearsOfService();
	  void SetYearsOfService(unsigned int YearsOfService);

    unsigned int GetSalary();
	  void SetSalary(unsigned int Salary);

  private:
	  unsigned int itsAge;
    unsigned int itsYearsOfService;
    unsigned int itsSalary;
};


int Employee::GetAge()
{
	return itsAge;
}

void Employee::SetAge(unsigned int Age)
{
	itsAge = Age;
}


int Employee::GetYearsOfService()
{
	return itsYearsOfService;
}

void Employee::SetYearsOfService(unsigned int YearsOfService)
{
	itsYearsOfService = YearsOfService;
}


int Employee::GetSalary()
{
	return itsSalary;
}

void Employee::SetSalary(unsigned int Salary)
{
	itsSalary = Salary;
}