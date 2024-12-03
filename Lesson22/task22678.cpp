// Задача 6, 7, 8.

// Оголосіть дружній оператор operator== класу List.

template <typename T>
class List
{
public:
    // ... інші методи класу ...

    friend bool operator==(const List<T>& lhs, const List<T>& rhs);

private:
    // ... приватні члени класу ...
};


// Напишіть виконання дружнього оператора operator== для класу List.

template <typename T>
bool operator==(const List<T>& lhs, const List<T>& rhs)
{
    if (lhs.count() != rhs.count())
        return false;

    typename List<T>::ListCell* cellLhs = lhs.head;
    typename List<T>::ListCell* cellRhs = rhs.head;

    while (cellLhs != nullptr && cellRhs != nullptr)
    {
        if (cellLhs->val != cellRhs->val)
            return false;
        cellLhs = cellLhs->next;
        cellRhs = cellRhs->next;
    }

    return true;
}


