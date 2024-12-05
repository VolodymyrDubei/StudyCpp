#include <iostream>

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

int main()
{
  try
  {
    throw DerivedException("Derivative exclusion", 200);
  }
  catch (const DerivedException &e)
  {
    cout << "Derived exception caught: " << e.what() << endl;
    cout << "Error Code: " << e.getErrorCode() << endl;
  }
  catch (const BaseException &e)
  {
    cout << "Base Exception Caught: " << e.what() << endl;
    cout << "Error Code: " << e.getErrorCode() << endl;
  }
  return 0;
}