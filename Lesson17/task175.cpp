#include <iostream>

using namespace std;

class MyClass
{
public:
  MyClass(int initOne, int initTwo, int initThree) : MemberOne(initOne), MemberTwo(initTwo), MemberThree(initThree)
    { 
      staticMember++;
    }

  ~MyClass() { staticMember--; }

  static int GetStatMember() { return staticMember; }
  int GetMemberOne() const { return MemberOne; }
  int GetMemberTwo() const { return MemberTwo; }
  int GetMemberThree() const { return MemberThree; }
  
private:
  static int staticMember;
  int MemberOne;
  int MemberTwo;
  int MemberThree;

};

int MyClass::staticMember = 0;


int main()
{
  cout << "Initial static count: " << MyClass::GetStatMember() << endl;

  MyClass *Obj1 = new MyClass(11, 12, 13);
  MyClass *Obj2 = new MyClass(22, 23, 24);
  MyClass *Obj3 = new MyClass(33, 34, 35);

  int (MyClass::*pFunc)() const = nullptr;
  
  pFunc = &MyClass::GetMemberOne;
  cout << "Member One" << endl;
  cout << "Data object 1: " << (Obj1->*pFunc)() << endl;
  cout << "Data object 2: " << (Obj2->*pFunc)() << endl;
  cout << "Data object 3: " << (Obj3->*pFunc)() << endl;
  cout << endl;

  pFunc = &MyClass::GetMemberTwo;
  cout << "Member Two" << endl;
  cout << "Data object 1: " << (Obj1->*pFunc)() << endl;
  cout << "Data object 2: " << (Obj2->*pFunc)() << endl;
  cout << "Data object 3: " << (Obj3->*pFunc)() << endl;
  cout << endl;

  pFunc = &MyClass::GetMemberThree;
  cout << "Member Three" << endl; 
  cout << "Data object 1: " << (Obj1->*pFunc)() << endl;
  cout << "Data object 2: " << (Obj2->*pFunc)() << endl;
  cout << "Data object 3: " << (Obj3->*pFunc)() << endl;
  cout << endl;

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