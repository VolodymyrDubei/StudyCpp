#include <iostream>

using namespace std;

class MyClass
{
public:
  MyClass(int initValue) : regularMember(initValue) { staticMember++; }

  ~MyClass() { staticMember--; }

  static int staticMember;
  int regularMember;
};

// Ініціалізація статичної змінної-члена
int MyClass::staticMember = 0;


int main()
{
   cout << "Initial static count: " << MyClass::staticMember << endl;

  MyClass *Obj1 = new MyClass(11);
  MyClass *Obj2 = new MyClass(22);
  MyClass *Obj3 = new MyClass(33);

  cout << "Data object 1: " << Obj1->regularMember << endl;
  cout << "Data object 2: " << Obj2->regularMember << endl;
  cout << "Data object 3: " << Obj3->regularMember << endl;

  cout << "Static count: " << MyClass::staticMember << endl;

  delete Obj1;
  Obj1 = nullptr;
  cout << "Static count: " << MyClass::staticMember << endl;

  delete Obj2;
  Obj2 = nullptr;
  cout << "Static count: " << MyClass::staticMember << endl;

  delete Obj3;
  Obj3 = nullptr;
  cout << "Static count: " << MyClass::staticMember << endl;

  return 0;
}