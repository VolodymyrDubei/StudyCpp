#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char fileName[80];
    char buffer[255]; // для введення даних користувача
    cout << "File name: ";
    cin >> fileName;

    ofstream fout(fileName); // відкриття файлу для запису
    fout << "This line written directly to the file...\n";

    cout << "Enter text for the file: ";
    cin.ignore(1, '\n');      // пропускає символ розриву строки після імя файлу
    cin.getline(buffer, 255); // приймає данні, що ввів користувач
    fout << buffer << "\n";   // і записує їх у файл
    fout.close();             // закриває файл, після чого його знову можна відкрити

    ifstream fin(fileName); // відкривається той же файл для читання
    cout << "Here's the contents of the file:\n";
    char ch;
    while (fin.get(ch))
        cout << ch;

    cout << "\n***End of contents.***\n";

    fin.close(); // не забуваємо закрити файл в кінці програми
    return 0;
}
////
//File name: test1
//Enter text for the file: This text is written to the file!
//Here's the contents of the file:
// This line written directly to the file...
// This text is written to the file!

