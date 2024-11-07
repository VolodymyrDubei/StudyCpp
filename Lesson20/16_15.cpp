#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    printf("%s", "hello world\n");
    string phrase = "Hello again!\n";
    printf("%s", phrase.c_str());

    int x = 5;
    printf("%d\n", x);
    const char *phraseTwo = "Heres some values: ";
    const char *phraseThree = " and also these: ";
    int y = 7, z = 35;
    long longVar = 98456;
    float floatVar = 8.8f;

    printf("%s %d %d %s %ld %f\n", phraseTwo, y, z, phraseThree, longVar, floatVar);

    const char *phraseFour = "Formatted: ";
    printf("%s %5d %10d %10.5f\n", phraseFour, y, z, floatVar);

    return 0;
}
////
// hello world
// Hello again!
// 5
// Here's some values:  7 35  and also these:  98456 8.800000
// Formatted:      7         35    8.80000

