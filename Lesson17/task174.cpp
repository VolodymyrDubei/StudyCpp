#include <iostream>

using namespace std;

class MyClass
{
public:
  MyClass(int initValue) : regularMember(initValue) { staticMember++; }

  ~MyClass() { staticMember--; }

  static int GetStatMember() { return staticMember; }
  int GetRegMember() const { return regularMember; }

private:
  static int staticMember;
  int regularMember;
};

int MyClass::staticMember = 0;


int main()
{
   cout << "Initial static count: " << MyClass::GetStatMember() << endl;

  MyClass *Obj1 = new MyClass(11);
  MyClass *Obj2 = new MyClass(22);
  MyClass *Obj3 = new MyClass(33);

  int (MyClass::*pFunc)() const = nullptr;
  pFunc = &MyClass::GetRegMember;

  cout << "Data object 1: " << (Obj1->*pFunc)() << endl;
  cout << "Data object 2: " << (Obj2->*pFunc)() << endl;
  cout << "Data object 3: " << (Obj3->*pFunc)() << endl;

  cout << "Static count: " << MyClass::GetStatMember() << endl;

  delete Obj1;
  Obj1 = nullptr;
  cout << "Static count: " << MyClass::GetStatMember() << endl;

  delete Obj2;
  Obj2 = nullptr;
  cout << "Static count: " << MyClass::GetStatMember() << endl;

  delete Obj3;
  Obj3 = nullptr;
  cout << "Static count: " << MyClass::GetStatMember() << endl;

  return 0;
}