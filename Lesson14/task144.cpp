


class Node 
{
public:
    Node(int value) : data(value), next(nullptr) {}
    ~Node() {}

    int getData() const { return data; }
    Node *getNext() const { return next; }

    void setData(int value) { data = value; }
    void setNext(Node *nextNode) { next = nextNode; }

private:
    int data;   // Дані вузла (ціле число)
    Node *next; // Вказівник на наступний вузол
};