#include <iostream>

using namespace std;

class Cat
{
public:
	Cat();
	Cat(const Cat &);
	~Cat();
	int GetAge() const { return *itsAge; }
	int GetWeight() const { return *itsWeight; }
	void SetAge(int age) { *itsAge = age; }

private:
	int *itsAge;
	int *itsWeight;
};

Cat::Cat()
{
	itsAge = new int;
	itsWeight = new int;
	*itsAge = 5;
	*itsWeight = 9;
}

Cat::Cat(const Cat &rhs)
{
	itsAge = new int;
	itsWeight = new int;
	*itsAge = rhs.GetAge();
	*itsWeight = *(rhs.itsWeight);
}

Cat::~Cat()
{
	delete itsAge;
	itsAge = nullptr;
	delete itsWeight;
	itsWeight = nullptr;
}

int main()
{
	Cat frisky;
	cout << "frisky's age: " << frisky.GetAge() << endl;
	cout << "Setting frisky to 6...\n";
	frisky.SetAge(6);
	cout << "Creating boots from frisky\n";
	Cat boots(frisky);
	cout << "frisky's age: " << frisky.GetAge() << endl;
	cout << "boots's age: " << boots.GetAge() << endl;
	cout << "setting frisky to 7...\n";
	frisky.SetAge(7);
	cout << "frisky's age: " << frisky.GetAge() << endl;
	cout << "boot's age: " << boots.GetAge() << endl;
	return 0;
}
// ////
// frisky's age: 5
// Setting frisky to 6...
// Creating boots from frisky
// frisky's age: 6
// boots's age: 6
// setting frisky to 7...
// frisky's age: 7
// boot's age: 6

