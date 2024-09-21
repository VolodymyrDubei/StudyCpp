#include <iostream>

using namespace std;

int main() 
{
    
    int* ptrOne = new int;

    *ptrOne = 15;
    
    cout << "ptrOne = " << *ptrOne << endl;
    
    // Звільняємо пам'ять
    delete ptrOne;
    // Тепер ptrOne - блукаючий вказівник
    
    ptrOne = nullptr;

    return 0;
}