class Employee
{
  public:
	  unsigned int GetAge() const;
	  void SetAge(unsigned int Age);

	  unsigned int GetYearsOfService() const;
	  void SetYearsOfService(unsigned int YearsOfService);

    unsigned int GetSalary() const;
	  void SetSalary(unsigned int Salary);

  private:
	  unsigned int itsAge;
    unsigned int itsYearsOfService;
    unsigned int itsSalary;
};


unsigned int Employee::GetAge() const
{
	return itsAge;
}

void Employee::SetAge(unsigned int Age)
{
	itsAge = Age;
}


unsigned int Employee::GetYearsOfService() const
{
	return itsYearsOfService;
}

void Employee::SetYearsOfService(unsigned int YearsOfService)
{
	itsYearsOfService = YearsOfService;
}


unsigned int Employee::GetSalary() const
{
	return itsSalary;
}

void Employee::SetSalary(unsigned int Salary)
{
	itsSalary = Salary;
}