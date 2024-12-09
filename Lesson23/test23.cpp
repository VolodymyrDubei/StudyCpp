#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

template <class T>
class Student
{
  public:
    Student(const string n, int a, T g) : name(n), age(a), grade(g) {}
    void display() const { cout << name << ", " << age << ", Grade: " << grade << endl; }
  private:
    string name;
    int age;
    T grade;
};

template <class T>
class Vector
{
  private:
    T* data;
    size_t capacity;
    size_t count;

    void resize(size_t newCapacity)
    {
        T* newData = new T[newCapacity];
        for (size_t i = 0; i < count; ++i) {
            newData[i] = move(data[i]);
        }
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

  public:
    Vector() : data(new T[1]), capacity(1), count(0) {}
    ~Vector() { delete[] data; }

    T& front()
    {
        if (empty()) throw out_of_range("Vector is empty");
        return data[0];
    }

    T& back()
    {
        if (empty()) throw out_of_range("Vector is empty");
        return data[count - 1];
    }

    void push_front(const T& value)
    {
        if (count == capacity) resize(capacity * 2);
        for (size_t i = count; i > 0; --i) {
            data[i] = move(data[i - 1]);
        }
        data[0] = value;
        ++count;
    }

    void push_back(const T& value)
    {
        if (count == capacity) resize(capacity * 2);
        data[count++] = value;
    }

    void pop_front()
    {
        if (empty()) throw out_of_range("Vector is empty");
        for (size_t i = 0; i < count - 1; ++i) {
            data[i] = move(data[i + 1]);
        }
        --count;
    }

    void pop_back()
    {
        if (empty()) throw out_of_range("Vector is empty");
        --count;
    }

    void insert(size_t position, const T& value)
    {
        if (position > count) throw out_of_range("Invalid position");
        if (count == capacity) resize(capacity * 2);
        for (size_t i = count; i > position; --i) {
            data[i] = move(data[i - 1]);
        }
        data[position] = value;
        ++count;
    }

    size_t size() const { return count; }
    bool empty() const { return count == 0; }

    T* begin() { return data; }
    T* end() { return data + count; }

    T& operator[](size_t index)
    {
        if (index >= count) throw out_of_range("Index out of range");
        return data[index];
    }
};

int main() {
    Vector<Student<int>> students;

    students.push_back(Student<int>("Alice", 20, 85));
    students.push_back(Student<int>("Bob", 22, 90));
    students.push_front(Student<int>("Charlie", 21, 88));

    cout << "Students:" << endl;
    for (auto it = students.begin(); it != students.end(); ++it) {
        it->display();
    }

    cout << "\nFirst student:" << endl;
    students.front().display();

    cout << "\nLast student:" << endl;
    students.back().display();

    students.insert(1, Student<int>("David", 23, 92));

    cout << "\nAfter insertion:" << endl;
    for (size_t i = 0; i < students.size(); ++i)
    {
        students[i].display();
    }

    students.pop_front();
    students.pop_back();

    cout << "\nAfter removal:" << endl;
    for (auto it = students.begin(); it != students.end(); ++it)
    {
        it->display();
    }

    cout << "\nTotal students: " << students.size() << endl;

    return 0;
}