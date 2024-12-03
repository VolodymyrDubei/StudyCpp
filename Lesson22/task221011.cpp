#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student
{
public:
	Student();
	Student(const string &name, const int age);
	Student(const Student &rhs);
	~Student();

	void SetName(const string &name);
	string GetName() const;
	void SetAge(const int age);
	int GetAge() const;
	Student &operator=(const Student &rhs);

private:
	string itsName;
	int itsAge;
};

Student::Student()
	: itsName("New Student"), itsAge(16)
{
}

Student::Student(const string &name, const int age) : itsName(name), itsAge(age)
{
}

Student::Student(const Student &rhs) : itsName(rhs.GetName()),
									   itsAge(rhs.GetAge())
{
}

Student::~Student()
{
}

void Student::SetName(const string &name)
{
	itsName = name;
}

string Student::GetName() const
{
	return itsName;
}

void Student::SetAge(const int age)
{
	itsAge = age;
}

int Student::GetAge() const
{
	return itsAge;
}

Student &Student::operator=(const Student &rhs)
{
	itsName = rhs.GetName();
	itsAge = rhs.GetAge();
	return *this;
}

ostream &operator<<(ostream &os, const Student &rhs)
{
	os << rhs.GetName() << " is " << rhs.GetAge() << " years old";
	return os;
}

template <class T>
void ShowVector(const vector<T> &v); // Відображає властивості вектора

typedef vector<Student> SchoolClass;

// Функтор для відображення даних студента
class StudentPrinter {
public:
    void operator()(const Student& student) const {
        cout << student << endl;
    }
};

int main()
{
	SchoolClass students;

    // Додавання чотирьох студентів до списку
    students.push_back(Student("John Doe", 20));
    students.push_back(Student("Jane Smith", 21));
    students.push_back(Student("Alice Johnson", 22));
    students.push_back(Student("Bob Brown", 23));

    cout << "Initial list of students:" << endl;
    //ShowVector(students);
    for (int i = 0; i < students.size(); ++i)
      StudentPrinter()(students[i]);

    // Збільшення віку кожного студента на один рік
    for (int i = 0; i < students.size(); ++i)
      students[i].SetAge(students[i].GetAge() + 1);

    cout << "\nUpdated list of students:" << endl;
    //ShowVector(students);
    for (int i = 0; i < students.size(); ++i)
      StudentPrinter()(students[i]);

    return 0;
  

}

//
// Відображає властивості вектора
//
template <class T>
void ShowVector(const vector<T> &v)
{
	cout << "max_size() = " << v.max_size();
	cout << "\tsize() = " << v.size();
	cout << "\tcapacity() = " << v.capacity();
	cout << "\t " << (v.empty() ? "empty" : "not empty");
	cout << "\n";
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << "\n";
	cout << endl;
}
