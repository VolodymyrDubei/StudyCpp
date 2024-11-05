#include <iostream>

using namespace std;

int main()
{
    char name[256];

    cout << "\nEnter your full name: ";
    cin.get(name, 256);

    cout << "Your name: " << name << endl;

    return 0;
}

