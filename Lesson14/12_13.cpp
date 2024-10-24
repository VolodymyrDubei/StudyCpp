#include <iostream>

using namespace std;

enum
{
	kIsSmaller,
	kIsLarger,
	kIsSame
};

// Зв'язний список що оснований на об'єктах класу Data
// Будь-який клас у зв'язаному списку повинен підтримувати два методи:
// Show (показувати значення) і Compare (повернення відносно позиції вузла)

class Data
{
public:
	Data(int val) : myValue(val) {}
	~Data() {}
	int Compare(const Data &);
	void Show() { cout << myValue << endl; }

private:
	int myValue;
};

// Порівняння використовується для визначення
// позиції у списку для нового вузла.
int Data::Compare(const Data &theOtherData)
{
	if (myValue < theOtherData.myValue)
    	return kIsSmaller;
	if (myValue > theOtherData.myValue)
    	return kIsLarger;
	else
    	return kIsSame;
}

// Оголошення
class Node;
class HeadNode;
class TailNode;
class InternalNode;

// ADT-подання вузлових об'єктів списку.
// У кожному похідному класі мають бути заміщені функції Insert та Show
class Node
{
public:
	Node() {}
	virtual ~Node() {}
	virtual Node *Insert(Data *theData) = 0;
	virtual void Show() = 0;
};

// Цей вузол підтримує реальні об'єкти.
// Зараз об'єкт має тип Data
// Про інший, більш загальний метод вирішення цієї
// задачі ми дізнаємося при розгляді шаблонів.
class InternalNode : public Node
{
public:
	InternalNode(Data *theData, Node *next);
	~InternalNode()
	{
    	delete myNext;
    	delete myData;
	}
	virtual Node *Insert(Data *theData);
	virtual void Show()
	{
    	myData->Show();
    	myNext->Show();
	}

private:
	Data *myData; // Дані списку
	Node *myNext; // Вказівник на наступний вузол у зв'язному списку
};

// Ініціалізація, що виконується кожним конструктором
InternalNode::InternalNode(Data *theData, Node *next) : myData(theData), myNext(next) {}

// Сутність списку.
// Коли в список передається новий об'єкт,
// програма визначає позицію у списку
// для нового вузла
Node *InternalNode::Insert(Data *theData)
{
	// Цей новенький більше чи менше, ніж я?
	int result = myData->Compare(*theData);

	switch (result)
	{
    	// За згодою, якщо він такий самий, як я, то він іде першим
	case kIsSame:   // умова виконується
	case kIsLarger: // нові дані вводяться перед моїми
	{
    	InternalNode *dataNode = new InternalNode(theData, this);
    	return dataNode;
	}
	// Він більше, ніж я, тому передається в
	// наступний вузол, і нехай той робить із цими даними все, що захоче.
	case kIsSmaller:
    	myNext = myNext->Insert(theData);
    	return this;
	}
	return this;
}

// Хвостовий вузол виконує роль вартового
class TailNode : public Node
{
public:
	TailNode() {}
	~TailNode() {}
	virtual Node *Insert(Data *theData);
	virtual void Show() {};
};

// Якщо дані підходять для мене, то вони повинні бути вставлені переді мною,
// так як я хвіст і НІЧОГО не може бути після мене
Node *TailNode::Insert(Data *theData)
{
	InternalNode *dataNode = new InternalNode(theData, this);
	return dataNode;
}

// Головний вузол містить даних, але тільки
// вказує на початок списку
class HeadNode : public Node
{
public:
	HeadNode();
	~HeadNode() { delete myNext; }
	virtual Node *Insert(Data *theData);
	virtual void Show() { myNext->Show(); }

private:
	Node *myNext;
};

// Як тільки створюється головний вузол,
// він створює хвіст
HeadNode::HeadNode()
{
	myNext = new TailNode;
}

// Нічого може бути перед головою, тому
// будь-які дані передається в наступний вузол
Node *HeadNode::Insert(Data *theData)
{
	myNext = myNext->Insert(theData);
	return this;
}

// Я лише розподіляю завдання між вузлами
class LinkedList
{
public:
	LinkedList();
	~LinkedList() { delete myHead; }
	void Insert(Data *theData);
	void ShowAll() { myHead->Show(); }

private:
	HeadNode *myHead;
};

// Список з'являється із створенням головного вузла,
// який одразу створює хвостовий вузол.
// Таким чином, порожній список містить вказівник на головний вузол,
// вказує, своєю чергою, на хвостовий вузол, між якими поки що немає.
LinkedList::LinkedList()
{
	myHead = new HeadNode;
}

// Делегування, делегування, делегування
void LinkedList::Insert(Data *pData)
{
	myHead->Insert(pData);
}

// Тестова програма
int main()
{
	Data *pData;
	int val;
	LinkedList ll;

	// Пропонує користувачеві ввести значення,
	// яке передається до списку
	while (true)
	{
    	cout << "What value? (0 to stop): ";
    	cin >> val;
    	if (!val)
        	break;
    	pData = new Data(val);
    	ll.Insert(pData);
	}
	// Тепер пройдемося по списку і подивимося значення
	ll.ShowAll();
	// ll виходить аз встановлені рамки і тому видалено!
	return 0;
}



// What value? (0 to stop): 5
// What value? (0 to stop): 8
// What value? (0 to stop): 3
// What value? (0 to stop): 9
// What value? (0 to stop): 2
// What value? (0 to stop): 10
// What value? (0 to stop): 0
// 2
// 3
// 5
// 8
// 9
// 10

