#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    cout << "Received " << argc << " arguments...\n";
    for (int i = argc-1; i > 0; i--)
        cout << "argument " << i << ": " << argv[i] << endl;

    return 0;
}
