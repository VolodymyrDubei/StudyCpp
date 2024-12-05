#include <iostream>

using namespace std;

class MyException : public runtime_error
{
private:
  int errorCode;

public:
  MyException(const char *message, int code) : runtime_error(message), errorCode(code) {}
  int getErrorCode() const { return errorCode; }
};

int main()
{
  try
  {
    throw MyException("Custom exception", 100);
  }
  catch (const MyException &e)
  {
    cout << "Exception caught: " << e.what() << endl;
    cout << "Error code: " << e.getErrorCode() << endl;
  }
  return 0;
}