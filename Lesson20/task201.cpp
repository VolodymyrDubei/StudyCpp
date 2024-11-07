#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main(int argc, char *argv[])
{
  // Перевірка наявності аргументу командного рядка
  if (argc != 2)
  {
    cout << "Usage: " << argv[0] << " <enter filename>" << endl;
    return (1);
  }

  // Відкриття файлу для читання
  ifstream fin(argv[1], ios::binary);
  if (!fin)
  {
    cout << "Unable to open " << argv[1] << " for reading.\n";
    return (1);
  }

  // Виводимо на друк без недрукованих символів
  char chr;
  while (fin.get(chr))
  {
    // Перевірка, чи символ є друкованим або пробілом
    if (isprint(static_cast<unsigned char>(chr)) || isspace(static_cast<unsigned char>(chr)))
    {
      cout << chr;
    }
  }

  // Закриття файлу
  fin.close();

  return 0;
}