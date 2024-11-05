#include <iostream>

using namespace std;

int main() 
{  
    char name[50];
    int age;

    // Використання cout для виведення
    cout << "\nEnter your name: ";
    
    // Використання cin для введення
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    // Перевірка віку і використання cerr для виведення помилки
    if (age <= 0 || age > 150) {
        cerr << "Error: Invalid age!" << endl;
        return 1;
    }

    // Використання cout для виведення інформації
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    // Використання clog для логування
    clog << "Information: Successfully processed user data " << name << "." << endl;

    return 0;
}