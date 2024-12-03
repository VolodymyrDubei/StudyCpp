
//  Створіть шаблон на основі цього класу List:

class List
{
public:
	List() : head(0), tail(0), theCount(0) {}
	virtual ~List();
	void insert(int value);
	void append(int value);
	int is_present(int value) const;
	int is_empty() const
	{
    	return head == 0;
	}
	int count() const { return theCount; }
private:
	class ListCell
	{
	public:
    	ListCell(int value, ListCell *cell = 0) : val(value),
                                              	next(cell) {}
    	int val;
    	ListCell *next;
	};
	int val;
	ListCell *next;
	ListCell *head;
	ListCell *tail;
	int theCount;
};


// Шаблон на основі класу List:

template <typename T>
class List
{
public:
    List() : head(nullptr), tail(nullptr), theCount(0) {}
    virtual ~List();
    void insert(T value);
    void append(T value);
    bool is_present(T value) const;
    bool is_empty() const { return head == nullptr; }
    int count() const { return theCount; }
private:
    class ListCell
    {
    public:
        ListCell(T value, ListCell *cell = nullptr) : val(value), next(cell) {}
        T val;
        ListCell *next;
    };
    ListCell *head;
    ListCell *tail;
    int theCount;
};


// Виконання звичайної (не шаблонної) версії класу List:

#include <iostream>

class List
{
public:
    List() : head(nullptr), tail(nullptr), theCount(0) {}
    
    ~List() {
        while (head) {
            ListCell *temp = head;
            head = head->next;
            delete temp;
        }
    }
    
    void insert(int value) {
        head = new ListCell(value, head);
        if (!tail) tail = head;
        ++theCount;
    }
    
    void append(int value) {
        if (!head) {
            insert(value);
        } else {
            tail->next = new ListCell(value);
            tail = tail->next;
            ++theCount;
        }
    }
    
    bool is_present(int value) const {
        for (ListCell *cell = head; cell; cell = cell->next) {
            if (cell->val == value) return true;
        }
        return false;
    }
    
    bool is_empty() const { return head == nullptr; }
    int count() const { return theCount; }

private:
    class ListCell
    {
    public:
        ListCell(int value, ListCell *cell = nullptr) : val(value), next(cell) {}
        int val;
        ListCell *next;
    };
    ListCell *head;
    ListCell *tail;
    int theCount;
};


// Шаблонний варіант виконання:

#include <iostream>

template <typename T>
class List
{
public:
    List() : head(nullptr), tail(nullptr), theCount(0) {}
    
    ~List() {
        while (head) {
            ListCell *temp = head;
            head = head->next;
            delete temp;
        }
    }
    
    void insert(T value) {
        head = new ListCell(value, head);
        if (!tail) tail = head;
        ++theCount;
    }
    
    void append(T value) {
        if (!head) {
            insert(value);
        } else {
            tail->next = new ListCell(value);
            tail = tail->next;
            ++theCount;
        }
    }
    
    bool is_present(T value) const {
        for (ListCell *cell = head; cell; cell = cell->next) {
            if (cell->val == value) return true;
        }
        return false;
    }
    
    bool is_empty() const { return head == nullptr; }
    int count() const { return theCount; }

private:
    class ListCell
    {
    public:
        ListCell(T value, ListCell *cell = nullptr) : val(value), next(cell) {}
        T val;
        ListCell *next;
    };
    ListCell *head;
    ListCell *tail;
    int theCount;
};

// Оголошення трьох списків об'єктів:

#include <string>

class Cat {
    // Визначення класу Cat
};

int main() {
    List<std::string> stringList;
    List<Cat> catList;
    List<int> intList;

    return 0;
}
