#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "\nEnter a phrase: ";
    while (cin.get(ch))
    {
        if (ch == '!')
        {
            cout << '$';
        }
        else if (ch != '#')
        {
            cout << ch;
        }
        
        // Пропускаємо всі '#' символи
        while (cin.peek() == '#')
        {
            cin.get(); // Читаємо і відкидаємо '#'
        }
    }

    return 0;
}