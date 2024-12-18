// Задача 5.
// Жучки: що неправильно у наведеному нижче програмному коді? (Припустіть,
// що визначається шаблон класу List, a Cat - це клас, визначений одному з попередніх занять.)
// ПІДКАЗКА (оскільки завдання не з найлегших): подумайте, чим тип Cat відрізняється від типу int?

List<Cat> Cat_List;
Cat Felix;
CatList.append(Felix);
cout << "Felix is "
 	<< (Cat_List.is_present(Felix)) ? "" : "not "
 	<< "present\n";


// Відповідь

/*
У цьому коді є кілька проблем:
- Помилка в імені змінної: CatList замість Cat_List в рядку CatList.append(Felix);.
- Оператор тернарного умовного виразу ?: має нижчий пріоритет, ніж оператор <<. Це призведе до неправильного порядку виконання операцій. Потрібно додати дужки.
- Найважливіша проблема (на яку натякає підказка): для об'єктів класу Cat не визначено оператор порівняння (==).
-- Для типу int оператор == вже визначений, тому метод is_present() працює коректно для List<int>.
-- Для користувацьких типів, таких як Cat, потрібно визначити оператор ==, щоб можна було порівнювати об'єкти.
*/


// Виправлений код може виглядати так:

List<Cat> Cat_List;
Cat Felix;
Cat_List.append(Felix);
cout << "Felix is " 
     << ((Cat_List.is_present(Felix)) ? "" : "not ")
     << "present\n";

