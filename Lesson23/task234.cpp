#include <iostream>
// #include <stdexcept>

using namespace std;

class BaseException : public runtime_error
{
protected:
  int errorCode;

public:
  BaseException(const char *message, int code) : runtime_error(message), errorCode(code) {}
  int getErrorCode() const { return errorCode; }
};

class DerivedException : public BaseException
{
public:
  DerivedException(const char *message, int code) : BaseException(message, code) {}
};

void level_3()
{
  throw DerivedException("Level 3 exception.", 300);
}

void level_2()
{
  level_3();
}

void level_1()
{
  level_2();
}

int main()
{
  try
  {
    level_1();
  }
  catch (const DerivedException &e)
  {
    cout << "Derived exception caught: " << e.what() << endl;
    cout << "Error code: " << e.getErrorCode() << endl;
  }
  catch (const BaseException &e)
  {
    cout << "Base exception caught: " << e.what() << endl;
    cout << "Error code: " << e.getErrorCode() << endl;
  }
  return 0;
}