#include <iostream>

using namespace std;

int main()
{
    char ch;
    while ((ch = cin.get()) != EOF)
    {
        cout << "ch: " << ch << endl;
    }
    cout << "\nDone!\n";

    return 0;
}
// ///////
// Hello
// ch: H
// ch: e
// ch: l
// ch: l
// ch: o
// ch: 

// World
// ch: W
// ch: o
// ch: r
// ch: l
// ch: d
// ch: 

// ^D
// Done!

