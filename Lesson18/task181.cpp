#include <iostream>
#include <string>

using namespace std;


class String
{
public:
  String() {};
  String(string init) : itsString(init) {};
  ~String() {};

  void SetString(string init) { itsString = init; }
  string GeString() const { return itsString; }

private:
  string itsString;
};


class Animal
{
public:
  Animal() {};
  Animal(String &initName) : Name(initName) {};
  ~Animal() {};

  void SetName(String &initName) { Name = initName; }
  String GetName() const { return Name; }

  void SetAge(int initAge) { Age = initAge; }
  int GetAge() const { return Age; }

private:
  String Name;
  int Age;
};


int main()
{

  Animal Bird;

  String Eagle;
  Eagle.SetString("berkut");

  Bird.SetName(Eagle);
  Bird.SetAge(5);

  cout << "\nName: " << Bird.GetName().GeString() << endl;
  cout << "Age: " << Bird.GetAge() << endl;

  return 0;
}