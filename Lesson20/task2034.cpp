

// Додати using namespace std
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}


// Використати префікс std:: для cout та endl
#include <iostream>
int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}

//Використати окремі using-декларації для cout та endl
#include <iostream>
using std::cout;
using std::endl;
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}