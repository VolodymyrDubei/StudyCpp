#include <iostream>

using namespace std;


class BoundedArray
{
private:
  int *array;
  int size;
  int count;

public:
  BoundedArray(int initSize) : size(initSize), count(0)
  {
    array = new int[size];
  }

  ~BoundedArray()
  {
    delete[] array;
  }

  void addArray(int value)
  {
    if (count < size)
    {
      array[count++] = value;
    }
    else
    {
      cout << "Масив переповнений!" << endl;
    }
  }

  void removeArray(int value)
  {
    for (int i = 0; i < count; ++i)
    {
      if (array[i] == value)
      {
        for (int j = i; j < count - 1; ++j)
        {
          array[j] = array[j + 1];
        }
        --count;
        return;
      }
    }
    cout << "Елемент не знайдено!" << endl;
  }

  int *getArray() const
  {
    return array;
  }

  int getArrayCount() const
  {
    return count;
  }
};




class Set
{
private:
  BoundedArray *setArray;

public:
  Set(int initSize) : setArray(new BoundedArray(initSize)) {}

  ~Set()
  {
    delete setArray;
  }

  void addSet(int value)
  {
    if (!containsSet(value))
    {
      setArray->addArray(value);
    }
  }

  void removeSet(int value)
  {
    setArray->removeArray(value);
  }

  bool containsSet(int value) const
  {
    int *arr = setArray->getArray();
    int count = setArray->getArrayCount();
    for (int i = 0; i < count; ++i)
    {
      if (arr[i] == value)
      {
        return true;
      }
    }
    return false;
  }

  void printSet() const
  {
    int *arr = setArray->getArray();
    int count = setArray->getArrayCount();
    cout << "Set: ";
    for (int i = 0; i < count; ++i)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main()
{
  Set Array(5);

  Array.addSet(1);
  Array.addSet(2);
  Array.addSet(3);
  Array.addSet(2); // Дублікат, не буде доданий
  Array.addSet(4);
  Array.addSet(5);
  Array.addSet(6);
  Array.addSet(7);
  
  Array.printSet();

  Array.removeSet(2);
  Array.printSet();

  cout << "Contains 3: " << (Array.containsSet(3) ? "Yes" : "No") << endl;
  cout << "Contains 2: " << (Array.containsSet(2) ? "Yes" : "No") << endl;

  return 0;
}