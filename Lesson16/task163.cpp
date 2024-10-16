#include <iostream>

using namespace std;

class MyClass
{
public:
  MyClass(int initValue) : regularMember(initValue) { staticMember++; }

  ~MyClass() { staticMember--; }

  int GetRegMember() { return regularMember; }

  static int staticMember;

private:
  int regularMember;
};

// Ініціалізація статичної змінної-члена
int MyClass::staticMember = 0;


int main()
{
  int max = 5;
  MyClass *Object[max];  

  cout << "Initial static count: " << MyClass::staticMember << endl;

  for(int i = 0; i < max; i++)
  {
    Object[i] = new MyClass(i * 2);
    cout << "Static count: " << MyClass::staticMember << endl;
  }

  cout << endl;

  for(int i = 0; i < max; i++)
  {
    cout << "Data object: " << Object[i]->GetRegMember() << endl;
    cout << "Static count: " << MyClass::staticMember << endl;

    delete Object[i];
    Object[i] = nullptr;
  }

  cout << "Final static count: " << MyClass::staticMember << endl;

  return 0;
}